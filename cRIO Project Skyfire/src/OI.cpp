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
#include "utilities.h"
#include "math.h"
#include "Commands/CmdDriveShiftToggle.h"
#include "Commands/CmdDriveChangeMode.h"
#include "Commands/CmdBlingToggle.h"
#include "Commands/CmdShooterShoot.h"
#include "Commands/CmdShooterMotorToggle.h"
#include "Commands/CmdShooterSpeedIncrease.h"
#include "Commands/CmdShooterSpeedDecrease.h"
#include "Commands/CmdShooterClearJam.h"

#include "Commands/CmdShooterSpeedToggle.h"
//#include "Commands/CmdCarHornOn.h"




OI::OI() {

// Process operator interface input here.
	m_Driver = new Joystick(0);
	m_Operator = new Joystick(1);


//Driver Button Bindings
	m_Driver_Y = new JoystickButton(m_Driver,XB360_Y);
	m_Driver_A = new JoystickButton(m_Driver,XB360_A);
	//m_Driver_X = new JoystickButton(m_Driver,XB360_X);
	//m_Driver_B = new JoystickButton(m_Driver,XB360_B);
	m_Driver_BACK = new JoystickButton(m_Driver,XB360_BACK);
	m_Driver_START = new JoystickButton(m_Driver,XB360_START);
	m_Driver_RB = new JoystickButton(m_Driver,XB360_BUMPER_RIGHT);
	m_Driver_LB = new JoystickButton(m_Driver,XB360_BUMPER_LEFT);

//Operator Button Bindings
	//m_Operator_Y = new JoystickButton(m_Operator,XB360_Y);
	//m_Operator_A = new JoystickButton(m_Operator,XB360_A);
	//m_Operator_X = new JoystickButton(m_Operator,XB360_X);
	//m_Operator_B = new JoystickButton(m_Operator,XB360_B);
	//m_Operator_BACK = new JoystickButton(m_Operator,XB360_BACK);
	m_Operator_START = new JoystickButton(m_Operator,XB360_START);
	m_Operator_RB = new JoystickButton(m_Operator,XB360_BUMPER_RIGHT);
	m_Operator_LB = new JoystickButton(m_Operator,XB360_BUMPER_LEFT);

//Driver Commands
	m_Driver_Y->WhenPressed(new CmdDriveChangeMode());
	m_Driver_A->WhenPressed(new CmdShooterClearJam(.25f));
	//m_Driver_X->WhenPressed(new CmdShooterClearJam(.25f));
	//m_Driver_B->WhenPressed(new ());
	m_Driver_BACK->WhenPressed(new CmdShooterMotorToggle());
	m_Driver_START->WhenPressed(new CmdShooterSpeedToggle());
	m_Driver_RB->WhenPressed(new CmdDriveShiftToggle());
	m_Driver_LB->WhenPressed(new CmdShooterShoot());

//Operator Commands
	//m_Operator_Y->WhenPressed(new CmdShooterClearJam(.25f));
	//m_Operator_A->WhenPressed(new CmdShooterMotorStop());
	//m_Operator_X->WhenPressed(new CmdBlingToggle());
	//m_Operator_B->WhenPressed(new ());
	//m_Operator_BACK->WhileHeld(new CmdCarHornOn());
	m_Operator_START->WhenPressed(new CmdBlingToggle());
	m_Operator_RB->WhenPressed(new CmdShooterSpeedIncrease());
	m_Operator_LB->WhenPressed(new CmdShooterSpeedDecrease());


}




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
	return scaleAxis(m_Driver->GetRawAxis(XB360_AXIS_TRIGGER_R));
}

float OI::driverLeftT()
{
	return scaleAxis(m_Driver->GetRawAxis(XB360_AXIS_TRIGGER_L));
}

float OI::operateLeftY()
{
	return scaleAxis(m_Operator->GetRawAxis(XB360_AXIS_LEFT_Y));
}

float OI::operateLeftX()
{
	return scaleAxis(m_Operator->GetRawAxis(XB360_AXIS_LEFT_X));
}

float OI::operateRightX()
{
	return scaleAxis(m_Operator->GetRawAxis(XB360_AXIS_RIGHT_X));
}

float OI::operateRightY()
{
	return scaleAxis(m_Operator->GetRawAxis(XB360_AXIS_RIGHT_Y));
}
float OI::scaleAxis( float inp )
{
	const float k = 21;
	const float y = 22;

	float filteredInput = fabs(inp);

	if (filteredInput < AXIS_FILTER )
		filteredInput = 0.0;

	return (pow( y, filteredInput ) - 1) / k * sign(inp);
}
