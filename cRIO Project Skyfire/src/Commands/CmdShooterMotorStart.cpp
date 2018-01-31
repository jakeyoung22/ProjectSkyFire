#include "CmdShooterMotorStart.h"

CmdShooterMotorStart::CmdShooterMotorStart() : CommandBase("CmdShooterMotorStart")
{
	Requires(shooter);
}

// Called just before this Command runs the first time
void CmdShooterMotorStart::Initialize()
{
	
}

// Called repeatedly when this Command is scheduled to run
void CmdShooterMotorStart::Execute()
{
	cout << "CmdShooterMotorStart Execute" << std::endl;
	//if(!deck->NearBottom() || DriverStation::GetInstance()->IsAutonomous())
	//{
		shooter->RunMotors();	
		RecordExecute();
	//}
}

// Make this return true when this Command no longer needs to run execute()
bool CmdShooterMotorStart::IsFinished()
{
	return true;
}

// Called once after isFinished returns true
void CmdShooterMotorStart::End()
{
	//shooter->StopMotors();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void CmdShooterMotorStart::Interrupted()
{
	//shooter->StopMotors();
}
