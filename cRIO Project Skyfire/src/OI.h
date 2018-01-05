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
		float driverRightT();
		float driverLeftT();

		float operateX();
		float operateY();
		float operateX2();
		float operateY2();

		float driveScale(float);


private:
	//Driver Buttons
		JoystickButton *m_Driver_Y;
		JoystickButton *m_Driver_X;
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
		//JoystickButton *m_Operator_START;
		//JoystickButton *m_Operator_RB;
		//JoystickButton *m_Operator_LB;


};

#endif  // OI_H
