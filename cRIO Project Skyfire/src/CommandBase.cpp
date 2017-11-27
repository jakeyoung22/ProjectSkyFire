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
