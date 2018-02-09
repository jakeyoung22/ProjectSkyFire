#include "CmdShooterShoot.h"
#include "CmdShooterPusherRetract.h"
#include "../utilities.h"

CmdShooterShoot::CmdShooterShoot( float waitTime ) : CommandBase("CmdShooterShoot")
{
	// Use requires() here to declare subsystem dependencies
	//Requires(shooter);
	m_waitTime = waitTime;
}

// Called just before this Command runs the first time
void CmdShooterShoot::Initialize()
{
	endPacketNumber = EndPacketNumber( m_waitTime );
	RecordInitialize();
}

// Called repeatedly when this Command is scheduled to run
void CmdShooterShoot::Execute()
{
	//fixme: this uses the raw speed get rather than the encoder setting. It may need to be changed if we get that working
	if(shooter->FrontMotorRawSpeed() > 0.0)
	{
		shooter->Pusher(Shooter::shoot);

	}
}

// Make this return true when this Command no longer needs to run execute()
bool CmdShooterShoot::IsFinished()
{
	return (DriverStation::GetInstance()->GetPacketNumber()) >= endPacketNumber;
}

// Called once after isFinished returns true
void CmdShooterShoot::End()
{
	Command *c = new CmdShooterPusherRetract();
	c->Start();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void CmdShooterShoot::Interrupted()
{
	Command *c = new CmdShooterPusherRetract();
	c->Start();	
}


