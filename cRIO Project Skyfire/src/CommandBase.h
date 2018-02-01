/*
 * CommandBase.h
 *
 *  Created on: Sep 14, 2017
 *      Author: jakey
 */

#ifndef COMMAND_BASE_H
#define COMMAND_BASE_H

#include <memory>
#include <string>

#include <Commands/Command.h>

#include "OI.h"
#include "Subsystems/Angulator.h"
#include "Subsystems/Base.h"
#include "Subsystems/Camera.h"
#include "Subsystems/Shooter.h"
#include "tools/tinyxml2.h"


/**
 * The base for all commands. All atomic commands should subclass CommandBase.
 * CommandBase stores creates and stores each control system. To access a
 * subsystem elsewhere in your code in your code use
 * CommandBase::exampleSubsystem
 */
class CommandBase: public Command {
public:
	CommandBase(const char *name);
	CommandBase();
	static void init();
	// Create a single static instance of all of your subsystems
	static Base *base;
	static Shooter *shooter;
	static Angulator *angulator;
	static Camera *camera;


	static OI *oi;

public:
	void startRecording( const char *filename );
	void stopRecording();

	virtual void RecordExecute( );
	void CommonRecord( const char *element, const char * contents=NULL );
	void CommonRecord( const char *element, const char * contents, const char * name );

	virtual void LoadData( tinyxml2::XMLElement * data );
	virtual void LoadInitData( tinyxml2::XMLElement *data );

protected:
	static FILE *recordingFile;
	static UINT32 basePacketNumber;
	static bool m_replaying;

	static void replaying( bool value );

public:
	static bool recording();
	static bool replaying();
};

#endif  // COMMAND_BASE_H
