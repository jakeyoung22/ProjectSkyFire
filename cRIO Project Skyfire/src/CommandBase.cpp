/*
 * CommandBase.cpp
 *
 *  Created on: Sep 14, 2017
 *      Author: jakey
 */

#include "CommandBase.h"

#include <Commands/Scheduler.h>





CommandBase::CommandBase(const char *name) : Command(name)
{
	//CommonRecord( "construct", NULL, name );
}

CommandBase::CommandBase() : Command()
{
	//CommonRecord( "construct", NULL, "unknown" );
}

// Initialize a single static instance of all of your subsystems. The following
// line should be repeated for each subsystem in the project.
Base* CommandBase::base = NULL;
PowerScrew* CommandBase::powerscrew	= NULL;
Shooter* CommandBase::shooter = NULL;
Camera* CommandBase::camera = NULL;
OI* CommandBase::oi = NULL;


// Hold a file pointer for recording
FILE * CommandBase::recordingFile = NULL;
UINT32 CommandBase::basePacketNumber = 0;

bool CommandBase::m_replaying = false;

void CommandBase::init()
{
    // Create a single static instance of all of your subsystems. The following
	// line should be repeated for each subsystem in the project.
	//examplesubsystem = new ExampleSubsystem();

	base = new Base();
	powerscrew = new PowerScrew();
	camera = new Camera();
	shooter = new Shooter();

	//	Note that this needs to be instantiated after the subsystems are generated
	oi = new OI();
}

void CommandBase::stopRecording()
{
	if (recordingFile != NULL)
	{
		fprintf( recordingFile, "</record> \r\n");
		fclose( recordingFile );
		recordingFile = NULL;
	}
}

//	Starts a recording into a file as provided in the parameter.
//	Writes the XML header
//	Remember the packet number at the start of this run
void CommandBase::startRecording(const char *filename)
{
	recordingFile = fopen( filename, "w" );
	if (recordingFile == NULL)
	{
		cout << "Error creating recording file: " << *filename << ", errno: "<< errno << std::endl;
	}
	else
	{
		fprintf( recordingFile, "<?xml version=\"1.0\" ?>\r\n" );
		fprintf( recordingFile, "<record>\r\n");
		basePacketNumber = DriverStation::GetInstance()->GetPacketNumber();
		cout << "Recording into file: " << *filename << std::endl;
		cout << "BasePacketNumber: " << basePacketNumber << std::endl;
	}
}

//	This virtual function takes care of any command that wants to simply record
//	an execute without any inner information.  Commands that have custom info
//	that they need to store in their element will override this.
void CommandBase::RecordExecute( )
{
	CommonRecord( "execute");
}

//	Standard recording method.  Takes an element name and some contents and writes
//	the XML element to the recording file.  Each element is timestamped using the
//	packet number last received from the Driver Station.
void CommandBase::CommonRecord( const char *element, const char * contents )
{
	//	Get our name from the Command method GetName()
	std::string na = GetName();

//	CommonRecord( element, contents, na.c_str() );
//}
//void CommandBase::CommonRecord( const char *element, const char * contents, const char * name )
//{
	const char * name = na.c_str();

	//	If we're recording, and our object has a name, then let's go
	if (recordingFile != NULL && name != NULL)
	{
		DriverStation *ds = DriverStation::GetInstance();

		//	Write the first part of the element containing the action (as the element
		//	name), the packet number (biased by the starting counter) and the object name.
		fprintf( recordingFile, "<%s clock='%09d' object='%s'",
					element, (ds->GetPacketNumber() - basePacketNumber), name  );

		//	If the contents are null, just close the element here.  If there are contents
		//	to write, then close the opening tag, write the contents and write the closing
		//	tag.
		if (contents == NULL)
			fprintf( recordingFile, " />\r\n");
		else
			fprintf( recordingFile, ">\r\n%s\r\n</%s>\r\n", contents, element );
	}
}

//	Function that can be called to dress up the check to see if the recording
//	file pointer is valid (i.e. are we recording right now).
bool CommandBase::recording()
{
	return (recordingFile != NULL);
}

//	Command objects that need it can use LoadData to load command specific data from
//	the recorded file.  If none is needed, this version is here for when it is called
//	and not needed (shouldn't happen, but just in case).
void CommandBase::LoadData(tinyxml2::XMLElement *data)
{

}
void CommandBase::LoadInitData( tinyxml2::XMLElement *data )
{

}
bool CommandBase::replaying()
{
	return m_replaying;
}
void CommandBase::replaying( bool value )
{
	m_replaying = value;
}
