#include "CmdTestShooterMotors.h"
#include "math.h"

CmdTestShooterMotors::CmdTestShooterMotors() {
	// Use requires() here to declare subsystem dependencies
	Requires(shooter);
}

// Called just before this Command runs the first time
void CmdTestShooterMotors::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void CmdTestShooterMotors::Execute() {
	shooter->SetRawMotorSpeed( fabs(oi->driverZ()) );
}

// Make this return true when this Command no longer needs to run execute()
bool CmdTestShooterMotors::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void CmdTestShooterMotors::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void CmdTestShooterMotors::Interrupted() {
}
