#include "CmdAngulatorByJoystick.h"
/*
 * Designed for testing purposes, not for normal operations
 */
CmdAngulatorByJoystick::CmdAngulatorByJoystick() : CommandBase("CmdAngulatorByJoystick")
{
	Requires(angulator);
}

// Called just before this Command runs the first time
void CmdAngulatorByJoystick::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void CmdAngulatorByJoystick::Execute() {

		m_speed = oi->operateLeftY();
	
	angulator->MoveByJoystick( m_speed );

}

// Make this return true when this Command no longer needs to run execute()
bool CmdAngulatorByJoystick::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void CmdAngulatorByJoystick::End() {
	angulator->StopPositioning();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void CmdAngulatorByJoystick::Interrupted() {
	angulator->StopPositioning();
}


