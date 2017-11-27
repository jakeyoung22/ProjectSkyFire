#include "CmdCameraLightOn.h"

CmdCameraLightOn::CmdCameraLightOn() : CommandBase("CmdCameraLightOn") {
	// Use requires() here to declare subsystem dependencies
	//Requires(shooter);
}

// Called just before this Command runs the first time
void CmdCameraLightOn::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void CmdCameraLightOn::Execute() {
	camera->LightOn();

}

// Make this return true when this Command no longer needs to run execute()
bool CmdCameraLightOn::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void CmdCameraLightOn::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void CmdCameraLightOn::Interrupted() {
}
