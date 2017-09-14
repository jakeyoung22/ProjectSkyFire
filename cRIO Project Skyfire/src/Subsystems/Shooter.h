/*
 * Shooter.h
 *
 *  Created on: Sep 14, 2017
 *      Author: jakey
 */

#ifndef Shooter_H
#define Shooter_H

#include <Commands/Subsystem.h>

class Shooter : public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities

public:
	Shooter();
	void InitDefaultCommand();
};

#endif  // Shooter_H
