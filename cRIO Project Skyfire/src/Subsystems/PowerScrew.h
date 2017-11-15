/*
 * PowerScrew.h
 *
 *  Created on: Sep 14, 2017
 *      Author: jakey
 */

#ifndef PowerScrew_H
#define PowerScrew_H

#include <Commands/Subsystem.h>
#include "WPILib.h"

class PowerScrew : public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities

public:
	PowerScrew();
	void InitDefaultCommand();
};

#endif  // Intake_H
