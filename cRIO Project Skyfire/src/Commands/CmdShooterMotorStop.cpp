#include "CmdShooterMotorStop.h"

CmdShooterMotorStop::CmdShooterMotorStop() : CommandBase("CmdShooterMotorStop")
{
	Requires(shooter);
}

// Called just before this Command runs the first time
void CmdShooterMotorStop::Initialize()
{
	
}

// Called repeatedly when this Command is scheduled to run
void CmdShooterMotorStop::Execute()
{
	shooter->StopMotors();	

}

// Make this return true when this Command no longer needs to run execute()
bool CmdShooterMotorStop::IsFinished()
{
	return true;
}

// Called once after isFinished returns true
void CmdShooterMotorStop::End()
{
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void CmdShooterMotorStop::Interrupted()
{
	
}
