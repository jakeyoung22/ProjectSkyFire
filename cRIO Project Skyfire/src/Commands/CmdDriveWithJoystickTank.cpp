/*
 * CmdDriveWithJoystickTank.cpp
 *
 *  Created on: Sep 14, 2017
 *      Author: jakey
 */

#include "CmdDriveWithJoystickTank.h"



CmdDriveWithJoystickTank::CmdDriveWithJoystickTank() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(base);
}

// Called just before this Command runs the first time
void CmdDriveWithJoystickTank::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void CmdDriveWithJoystickTank::Execute() {
	ReadJoysticks();
	base->JoystickTankDrive(m_left, m_right);
}

// Make this return true when this Command no longer needs to run execute()
bool CmdDriveWithJoystickTank::IsFinished() {
	return base->driveType() != Base::tank;
}

// Called once after isFinished returns true
void CmdDriveWithJoystickTank::End() {
	base->Stop();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void CmdDriveWithJoystickTank::Interrupted() {
	base->Stop();
}

void CmdDriveWithJoystickTank::ReadJoysticks() {
	m_left = oi->driverLeftY();
	m_right = oi->driverRightY();
}
