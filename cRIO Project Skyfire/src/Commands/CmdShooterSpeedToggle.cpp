#include "CmdShooterSpeedToggle.h"

CmdShooterSpeedToggle::CmdShooterSpeedToggle() : CommandBase("CmdShooterSpeedToggle")
{
	// Use requires() here to declare subsystem dependencies
	Requires(shooter);
}

// Called just before this Command runs the first time
void CmdShooterSpeedToggle::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void CmdShooterSpeedToggle::Execute() {
	shooter->MotorSpeedToggle();
	RecordExecute();
}

// Make this return true when this Command no longer needs to run execute()
bool CmdShooterSpeedToggle::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void CmdShooterSpeedToggle::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void CmdShooterSpeedToggle::Interrupted() {
}
