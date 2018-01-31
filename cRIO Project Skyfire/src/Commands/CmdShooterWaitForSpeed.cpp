#include "CmdShooterWaitForSpeed.h"

CmdShooterWaitForSpeed::CmdShooterWaitForSpeed( ) : CommandBase("CmdShooterWaitForSpeed")
{
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	//m_waitTime = waitTime;
}

// Called just before this Command runs the first time
void CmdShooterWaitForSpeed::Initialize()
{
	//endPacketNumber = DriverStation::GetInstance()->GetPacketNumber() + (int)(m_waitTime * 50.0);
}

// Called repeatedly when this Command is scheduled to run
void CmdShooterWaitForSpeed::Execute()
{
	
}

// Make this return true when this Command no longer needs to run execute()
bool CmdShooterWaitForSpeed::IsFinished()
{
	return (shooter->OkayToShoot() );
	//return (DriverStation::GetInstance()->GetPacketNumber()) >= endPacketNumber ;

}

// Called once after isFinished returns true
void CmdShooterWaitForSpeed::End()
{
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void CmdShooterWaitForSpeed::Interrupted()
{
	
}
