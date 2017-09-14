/*
 * OI.cpp
 *
 *  Created on: Sep 14, 2017
 *      Author: jakey
 */

#include "OI.h"
#include "Robotmap.h"
#include <WPILib.h>
#include "xb360map.h"
#include "math.h"
#include "Commands/CmdDriveShiftToggle.h"
#include "Commands/CmdDriveChangeMode.h"

OI::OI() {
	// Process operator interface input here.
	m_Driver 	= new Joystick(0);
	m_Operator 	= new Joystick(1);

	//Driver

m_Shift = new JoystickButton(m_Driver,XB360_BUMPER_RIGHT);
m_Shift ->WhenPressed(new CmdDriveShiftToggle());

m_driveType = new JoystickButton(m_Driver,XB360_START);
m_driveType ->WhenPressed(new CmdDriveChangeMode());
}




//Operator
float OI::driveScale(float in)
{
	return ((fabs(in) < 0.01) ? 0 : in);
}
float OI::driverLeftX()
{
	return 0 - driveScale(m_Driver->GetRawAxis(XB360_AXIS_LEFT_X));
}

float OI::driverLeftY()
{
	return 0 - driveScale(m_Driver->GetRawAxis(XB360_AXIS_LEFT_Y));
}

float OI::driverRightX()
{
	return 0 - driveScale(m_Driver->GetRawAxis(XB360_AXIS_RIGHT_X));
}

float OI::driverRightY()
{
	return 0 - driveScale(m_Driver->GetRawAxis(XB360_AXIS_RIGHT_Y));
}



