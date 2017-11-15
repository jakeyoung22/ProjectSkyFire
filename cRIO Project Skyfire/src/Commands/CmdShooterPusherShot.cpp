#include "CmdShooterPusherShot.h"

CmdShooterPusherShot::CmdShooterPusherShot() : CommandBase("CmdShooterPusherShot") {
	// Use requires() here to declare subsystem dependencies
	//Requires(shooter);
}

// Called just before this Command runs the first time
void CmdShooterPusherShot::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void CmdShooterPusherShot::Execute() {
	shooter->PushDisc( true );

}

// Make this return true when this Command no longer needs to run execute()
bool CmdShooterPusherShot::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void CmdShooterPusherShot::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void CmdShooterPusherShot::Interrupted() {
}
