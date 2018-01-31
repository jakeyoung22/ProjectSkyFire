/*
 * Pneumatics.cpp
 *
 *  Created on: Sep 14, 2017
 *      Author: jakey
 */

#include "Pneumatics.h"
#include "../Robotmap.h"

Pneumatics::Pneumatics() : Subsystem("Compressor")
{
	 m_compressor = new Compressor(GPIO_PRESSURE, RELAY_COMPRESSOR);

}

void Pneumatics::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}

void Pneumatics::Start()
{
	m_compressor->Start();
}

bool Pneumatics::TankFull()
{
	return m_compressor->GetPressureSwitchValue();
}


