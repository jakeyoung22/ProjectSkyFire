#include "CmdShooterShoot.h"

CmdShooterShoot::CmdShooterShoot() : CommandBase("CmdShooterShoot")
{
	Requires(shooter);
}

// Called just before this Command runs the first time
void CmdShooterShoot::Initialize()
{
	
}

// Called repeatedly when this Command is scheduled to run
void CmdShooterShoot::Execute()
{
	cout << "CmdShooterShoot Execute" << std::endl;
	//if(!deck->NearBottom() || DriverStation::GetInstance()->IsAutonomous())
	//{
		shooter->ShooterRawStart(1.0f);

	//}
}

// Make this return true when this Command no longer needs to run execute()
bool CmdShooterShoot::IsFinished()
{
	return true;
}

// Called once after isFinished returns true
void CmdShooterShoot::End()
{
	//shooter->StopMotors();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void CmdShooterShoot::Interrupted()
{
	//shooter->StopMotors();
}
