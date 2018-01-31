#include "CmdShooterSpeedDecrease.h"
#include "CmdShooterMotorStart.h"

CmdShooterSpeedDecrease::CmdShooterSpeedDecrease() : CommandBase("CmdShooterSpeedIncrease")
{
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
}

// Called just before this Command runs the first time
void CmdShooterSpeedDecrease::Initialize()
{
	
}

// Called repeatedly when this Command is scheduled to run
void CmdShooterSpeedDecrease::Execute()
{
	shooter->DecreaseShooterSpeed();
	if(shooter -> FrontMotorRawSpeed() > 0.0)
	{
		Command *c = new CmdShooterMotorStart();
		c->Start();
	}
}

// Make this return true when this Command no longer needs to run execute()
bool CmdShooterSpeedDecrease::IsFinished()
{
	return true;
}

// Called once after isFinished returns true
void CmdShooterSpeedDecrease::End()
{
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void CmdShooterSpeedDecrease::Interrupted()
{

}
