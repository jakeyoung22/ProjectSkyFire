/*
 * OI.h
 *
 *  Created on: Sep 14, 2017
 *      Author: jakey
 */

#ifndef OI_H
#define OI_H

#include "WPILib.h"


class OI {
private:
	Joystick *m_Driver, *m_Operator;

public:
	OI();
		float driverLeftX();
		float driverLeftY();
		float driverRightX();
		float driverRightY();
		float driverZ();

		float operateLeftX();
		float operateLeftY();
		float operateRightX();
		float operateRightY();
		float operateZ();

		float driveScale(float);



private:
	//Driver Buttons
		JoystickButton *m_Driver_Y;
		//JoystickButton *m_Driver_X;
		//JoystickButton *m_Driver_B;
		JoystickButton *m_Driver_A;
		JoystickButton *m_Driver_BACK;
		JoystickButton *m_Driver_START;
		JoystickButton *m_Driver_RB;
		JoystickButton *m_Driver_LB;

	//Operator Buttons
		//JoystickButton *m_Operator_Y;
		//JoystickButton *m_Operator_X;
		//JoystickButton *m_Operator_B;
		//JoystickButton *m_Operator_A;
		//JoystickButton *m_Operator_BACK;
		JoystickButton *m_Operator_START;
		JoystickButton *m_Operator_RB;
		JoystickButton *m_Operator_LB;

		static float scaleAxis( float inp );
		const static float  AXIS_FILTER = 0.04;

};

#endif  // OI_H
