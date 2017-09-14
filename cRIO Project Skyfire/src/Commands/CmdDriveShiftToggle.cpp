/*
 * CmdDriveShiftToggle.cpp
 *
 *  Created on: Sep 14, 2017
 *      Author: jakey
 */

#include "CmdDriveShiftToggle.h"
#include "CmdDriveShiftLow.h"
#include "CmdDriveShiftHigh.h"

CmdDriveShiftToggle::CmdDriveShiftToggle() {
	// Use requires() here to declare subsystem dependencies
	 //Requires(base);
}

// Called just before this Command runs the first time
void CmdDriveShiftToggle::Initialize() {
	c = NULL;
}

// Called repeatedly when this Command is scheduled to run
void CmdDriveShiftToggle::Execute() {
	if(base->Shift() == Base::low) {
		c = new CmdDriveShiftHigh();
	}
	else {
		c = new CmdDriveShiftLow();
	}
	c->Start();
}

// Make this return true when this Command no longer needs to run execute()
bool CmdDriveShiftToggle::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void CmdDriveShiftToggle::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void CmdDriveShiftToggle::Interrupted() {
}
