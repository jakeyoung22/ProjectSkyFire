/*
 * CmdDriveChangeMode.cpp
 *
 *  Created on: Sep 14, 2017
 *      Author: jakey
 */

#include "CmdDriveChangeMode.h"

CmdDriveChangeMode::CmdDriveChangeMode() : CommandBase("CmdDriveChangeMode") {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
}

// Called just before this Command runs the first time
void CmdDriveChangeMode::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void CmdDriveChangeMode::Execute() {
	if(base->driveType() == Base::arcade) {
		base->driveType(Base::tank);
	}
	else {
		base->driveType(Base::arcade);
	}
}

// Make this return true when this Command no longer needs to run execute()
bool CmdDriveChangeMode::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void CmdDriveChangeMode::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void CmdDriveChangeMode::Interrupted() {
}



