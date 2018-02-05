#include "CmdCarHornOff.h"

CmdCarHornOff::CmdCarHornOff() : CommandBase("CmdCarHornOff") {
	// Use requires() here to declare subsystem dependencies
	//Requires(shooter);
}

// Called just before this Command runs the first time
void CmdCarHornOff::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void CmdCarHornOff::Execute() {
	//base->hornOff();

}

// Make this return true when this Command no longer needs to run execute()
bool CmdCarHornOff::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void CmdCarHornOff::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void CmdCarHornOff::Interrupted() {
	End();
}
