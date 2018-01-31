#include "CmdShooterClearJam.h"

CmdShooterClearJam::CmdShooterClearJam(float waitTime) : CommandBase( "CmdShooterClearJam"){
	Requires(shooter);
	m_waitTime = waitTime;
}

// Called just before this Command runs the first time
void CmdShooterClearJam::Initialize() {
	endPacketNumber = DriverStation::GetInstance()->GetPacketNumber() + (int)(m_waitTime * 50.0);
}

// Called repeatedly when this Command is scheduled to run
void CmdShooterClearJam::Execute() {
	shooter->SetBackMotorOnly(-0.40f);
	RecordExecute();
}

// Make this return true when this Command no longer needs to run execute()
bool CmdShooterClearJam::IsFinished() {
	return (DriverStation::GetInstance()->GetPacketNumber()) >= endPacketNumber;
}

// Called once after isFinished returns true
void CmdShooterClearJam::End() {
	shooter->StopMotors();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void CmdShooterClearJam::Interrupted() {
	shooter->StopMotors();
}
