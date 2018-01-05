#include "CmdCarHornOn.h"

CmdCarHornOn::CmdCarHornOn() : CommandBase("CmdCarHornOn") {
	// Use requires() here to declare subsystem dependencies
	//Requires(shooter);
}

// Called just before this Command runs the first time
void CmdCarHornOn::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void CmdCarHornOn::Execute() {
	base->hornOn();

}

// Make this return true when this Command no longer needs to run execute()
bool CmdCarHornOn::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void CmdCarHornOn::End() {
	base->hornOff();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void CmdCarHornOn::Interrupted() {
	End();
}
