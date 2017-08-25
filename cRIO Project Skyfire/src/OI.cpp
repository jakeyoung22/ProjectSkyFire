#include "OI.h"
#include "Robotmap.h"
#include <WPILib.h>
#include "xb360map.h"
#include "math.h"

OI::OI() {
	// Process operator interface input here.
	m_Driver 	= new Joystick(0);
	m_Operator 	= new Joystick(1);
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



