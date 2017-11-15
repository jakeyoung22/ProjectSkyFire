/*
 * CmdBlingToggle.cpp
 *
 *  Created on: Oct 24, 2017
 *      Author: jakey
 */
#include "CmdBlingToggle.h"

CmdBlingToggle::CmdBlingToggle() : CommandBase("CmdBlingToggle") {
	// Use requires() here to declare subsystem dependencies
	Requires(base);

}

// Called just before this Command runs the first time
void CmdBlingToggle::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void CmdBlingToggle::Execute() {
	if(base->updateBling() == Base::on){
		base->updateBling(Base::off);
	}
	else {
			base->updateBling(Base::on);
		}

}

// Make this return true when this Command no longer needs to run execute()
bool CmdBlingToggle::IsFinished() {
 return true;
}

// Called once after isFinished returns true
void CmdBlingToggle::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void CmdBlingToggle::Interrupted() {
}







