/*
 * Shooter.cpp
 *
 *  Created on: Nov 13, 2017
 *      Author: jakey
 */

#include "Shooter.h"
#include "../RobotMap.h"

Shooter::Shooter() : Subsystem("shooter") {



	m_frontMotor	 = new Victor (PWM_SHOOTER_1);
	m_middleMotor	 = new Victor(PWM_SHOOTER_2 );
	m_backMotor		 = new Victor(PWM_SHOOTER_3);

	m_Pusher = new Solenoid(SOL_SHOOTER_LOADER);
	PushDisc(false);
	m_shooterRawSpeed = SHOOTER_RAW_SPEED;

	m_frontMotor->SetSafetyEnabled( SAFETY_ENABLED );
	m_middleMotor->SetSafetyEnabled( SAFETY_ENABLED );
	m_backMotor->SetSafetyEnabled( SAFETY_ENABLED );
}

void Shooter::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	// SetDefaultCommand(new MySpecialCommand());

}

void Shooter::Stop()
{
	m_frontMotor->StopMotor();
	m_middleMotor->StopMotor();
	m_backMotor->StopMotor();
}

void Shooter::ShooterRawStart(float speed)
{
	if (speed > 1) speed = 1;
	m_frontMotor->SetSpeed(speed);
	m_middleMotor->SetSpeed(speed);
	m_backMotor->SetSpeed(speed);
}

void Shooter::SpeedIncrease()
{
	m_shooterRawSpeed += SHOOTER_SPEED_INCREMENT;
		if(m_shooterRawSpeed > 1.0f)
		{
			m_shooterRawSpeed = 1.0f;
		}
}

void Shooter::SpeedDecrease()
{
	m_shooterRawSpeed -= SHOOTER_SPEED_INCREMENT;
	if(m_shooterRawSpeed < 0.0f)
	{
		m_shooterRawSpeed = 0.0f;
	}
}



void Shooter::PushDisc( bool value )
{
	m_Pusher->Set(value);
}
