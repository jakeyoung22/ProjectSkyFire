/*
 * Angulator.h
 *
 *  Created on: Sep 14, 2017
 *      Author: jakey
 */

#ifndef Angulator_H
#define Angulator_H

#include <Commands/Subsystem.h>
#include "WPILib.h"

class Angulator : public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	Victor  *m_Screw;



public:
	Angulator();
	void InitDefaultCommand();
	void MoveByJoystick( float speed );
	void StopPositioning();

};

#endif  // Intake_H
