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
	 m_analogPressure = new AnalogChannel(ANALOG_PRESSURE_SENSOR);
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

int Pneumatics::GetPressure() {
	return (int)((m_analogPressure->GetVoltage() - PNEUMATICS_PRESSURE_VOLTAGE_B) * PNEUMATICS_PRESSURE_VOLTAGE_M + 0.5);
}
