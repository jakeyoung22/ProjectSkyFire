#include "CmdCameraLightOff.h"

CmdCameraLightOff::CmdCameraLightOff() : CommandBase("CmdCameraLightOff") {
	// Use requires() here to declare subsystem dependencies
	//Requires(shooter);
}

// Called just before this Command runs the first time
void CmdCameraLightOff::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void CmdCameraLightOff::Execute() {
	camera->LightOff();

}

// Make this return true when this Command no longer needs to run execute()
bool CmdCameraLightOff::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void CmdCameraLightOff::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void CmdCameraLightOff::Interrupted() {
}
