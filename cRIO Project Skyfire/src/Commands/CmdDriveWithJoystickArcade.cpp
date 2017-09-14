/*
 * CmdDriveWithJoystickArcade.cpp
 *
 *  Created on: Sep 14, 2017
 *      Author: jakey
 */

#include "CmdDriveWithJoystickArcade.h"


CmdDriveWithJoystickArcade::CmdDriveWithJoystickArcade() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(base);
}

// Called just before this Command runs the first time
void CmdDriveWithJoystickArcade::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void CmdDriveWithJoystickArcade::Execute() {
	ReadJoystick();
	base->JoystickArcadeDrive(m_speed, m_rotate);
}

// Make this return true when this Command no longer needs to run execute()
bool CmdDriveWithJoystickArcade::IsFinished() {
	return base->driveType() != Base::arcade;
}

// Called once after isFinished returns true
void CmdDriveWithJoystickArcade::End() {
	base->Stop();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void CmdDriveWithJoystickArcade::Interrupted() {
	base->Stop();
}

void CmdDriveWithJoystickArcade::ReadJoystick() {
	m_speed = oi->driverLeftY();
	m_rotate = oi->driverLeftX();
}
