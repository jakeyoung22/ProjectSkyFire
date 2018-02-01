/*
 * Angulator.cpp
 *
 *  Created on: Sep 14, 2017
 *      Author: jakey
 */

#include "Angulator.h"

#include "math.h"
#include "../RobotMap.h"
#include "../utilities.h"


Angulator::Angulator() : Subsystem("angulator") {

	m_Screw = new Victor(PWM_LEAD);

	m_Screw->SetSafetyEnabled( SAFETY_ENABLED );
}

void Angulator::InitDefaultCommand() {

	// Set the default command for a subsystem here.
	// SetDefaultCommand(new MySpecialCommand());
}


// Put methods for controlling this subsystem
// here. Call these from Commands.

void Angulator::MoveByJoystick( float speed )
{

	m_Screw->SetSpeed(speed);

	//cout << "Deck motor speed " << speed << std::endl;
}

void Angulator::StopPositioning()
{
	m_Screw->StopMotor();

}

