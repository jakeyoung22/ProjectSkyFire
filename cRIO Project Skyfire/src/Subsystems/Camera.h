/*
 * Camera.h
 *
 *  Created on: Sep 14, 2017
 *      Author: jakey
 */

#ifndef Camera_H
#define Camera_H

#include <Commands/Subsystem.h>
#include "WPILib.h"

class Camera : public Subsystem {
public:
	Relay *m_relayCamera;
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities


public:
	Camera();

	void InitDefaultCommand();
	void LightOn();
	void LightOff();
};

#endif  // Camera_H
