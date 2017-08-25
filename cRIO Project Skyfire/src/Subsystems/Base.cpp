#include "Base.h"
#include "../RobotMap.h"
#include "../Commands/CmdDriveWithJoystickTank.h"
#include "../Commands/CmdDriveWithJoystickArcade.h"

Base::Base() : Subsystem("base") {

	m_leftOne 		= new Victor(PWM_LEFT_1);
	m_leftTwo		= new Victor(PWM_LEFT_2);
	m_leftThree 	= new Victor(PWM_LEFT_3);
	m_rightOne 		= new Victor(PWM_RIGHT_1);
	m_rightTwo 		= new Victor(PWM_RIGHT_2);
	m_rightThree 	= new Victor(PWM_RIGHT_3);

	m_driveOne 		= new RobotDrive(m_leftOne, m_leftTwo, m_rightOne, m_rightTwo);
	m_driveTwo 		= new RobotDrive(m_leftThree, m_rightThree);

	m_solShift 		= new DoubleSolenoid(SOL_SHIFT_HIGH, SOL_SHIFT_LOW);

	m_drivetype = tank;

	m_cmdTank = NULL;
	m_cmdArcade = NULL;

	m_shift = high;
}

void Base::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	// SetDefaultCommand(new MySpecialCommand());
	//TODO: SetDefaultCommand = new cmdTankDrive();

}

void Base::Stop() {
	m_driveOne->StopMotor();
	m_driveTwo->StopMotor();
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
