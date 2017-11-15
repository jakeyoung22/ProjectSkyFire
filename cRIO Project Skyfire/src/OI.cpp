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
#include "Commands/CmdBlingToggle.h"
#include "Commands/CmdShooterMotorStart.h"
#include "Commands/CmdShooterMotorStop.h"
#include "Commands/CgLoaderAction.h"




OI::OI() {

// Process operator interface input here.
	m_Driver = new Joystick(PAD_DRIVER);
	m_Operator = new Joystick(PAD_OPERATOR);

#define BUTTON_SETUP(btn_name, pad, btn_code, action, cmd, arg) \
	btn_name = new JoystickButton(pad, btn_code); \
	btn_name->action(new cmd(arg));
#include "buttons.h"
#undef BUTTON_SETUP
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

float OI::driverRightT()
{
	return (m_Driver->GetRawAxis(XB360_AXIS_TRIGGER_R));
}

float OI::driverLeftT()
{
	return (m_Driver->GetRawAxis(XB360_AXIS_TRIGGER_L));
}

