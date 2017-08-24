#ifndef Base_H
#define Base_H

#include <Commands/Subsystem.h>
#include "WPILib.h"

class Base : public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	Victor *m_leftOne, *m_leftTwo, *m_leftThree, *m_rightOne, *m_rightTwo, *m_rightThree;
	RobotDrive *m_driveOne, *m_driveTwo;
	DoubleSolenoid *m_solGear;
	Encoder *m_leftEncoder, *m_rightEncoder;
public:
	Base();
	void InitDefaultCommand();
};

#endif  // Base_H
