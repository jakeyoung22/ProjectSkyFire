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

		float operateX();
		float operateY();
		float operateX2();
		float operateY2();

		float driveScale(float);



};

#endif  // OI_H
