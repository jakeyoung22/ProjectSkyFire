#include "CmdShooterPusherRetract.h"

CmdShooterPusherRetract::CmdShooterPusherRetract() : CommandBase("CmdShooterPusherRetract") {
	// Use requires() here to declare subsystem dependencies
	//Requires(shooter);
}

// Called just before this Command runs the first time
void CmdShooterPusherRetract::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void CmdShooterPusherRetract::Execute() {
	shooter->Pusher(Shooter::retract);

}

// Make this return true when this Command no longer needs to run execute()
bool CmdShooterPusherRetract::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void CmdShooterPusherRetract::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void CmdShooterPusherRetract::Interrupted() {
}
