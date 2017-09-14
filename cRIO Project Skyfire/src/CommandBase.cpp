/*
 * CommandBase.cpp
 *
 *  Created on: Sep 14, 2017
 *      Author: jakey
 */

#include "CommandBase.h"

#include <Commands/Scheduler.h>


#include "Subsystems/Base.h"
#include "Subsystems/Intake.h"
#include "Subsystems/Shooter.h"
#include "Subsystems/Camera.h"

// Initialize a single static instance of all of your subsystems. The following
// line should be repeated for each subsystem in the project.
Base* CommandBase::base = NULL;
Intake* CommandBase::intake	= NULL;
Shooter* CommandBase::shooter = NULL;
Camera* CommandBase::camera = NULL;
OI* CommandBase::oi = NULL;
