#include "CmdShooterMotorToggle.h"

CmdShooterMotorToggle::CmdShooterMotorToggle() : CommandBase("CmdShooterMotorToggle")
{
	
}

// Called just before this Command runs the first time
void CmdShooterMotorToggle::Initialize()
{
	
}

// Called repeatedly when this Command is scheduled to run
void CmdShooterMotorToggle::Execute()
{
	Command *c;
	if(shooter -> FrontMotorRawSpeed() > 0.0/*shooter->FrontMotorSpeed() >= 10.0*/)	//todo: change back to encoder when it works
	{
		c = new CmdShooterMotorStop();
	}
	else
	{
		c = new CmdShooterMotorStart();
	}
	
	c->Start();
	// Don't record, so that playback doesn't have to know not to replay it back
	// Why not replay it?  Because that would duplicate the command we're about to
	// spawn (well, it may duplicate or do the wrong one, or... )
	//RecordExecute();
}

// Make this return true when this Command no longer needs to run execute()
bool CmdShooterMotorToggle::IsFinished()
{
	return true;
}

// Called once after isFinished returns true
void CmdShooterMotorToggle::End()
{
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void CmdShooterMotorToggle::Interrupted()
{
	
}
