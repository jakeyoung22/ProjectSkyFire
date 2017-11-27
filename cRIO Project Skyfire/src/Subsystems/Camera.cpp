/*
 * Camera.cpp
 *
 *  Created on: Sep 14, 2017
 *      Author: jakey
 */

#include "Camera.h"
#include "../RobotMap.h"

Camera::Camera() : Subsystem("camera") {

	m_relayCamera = new Relay(RELAY_CAMERA);
}

void Camera::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	// SetDefaultCommand(new MySpecialCommand());
}

void Camera::LightOn()
{
	m_relayCamera->Set(Relay::kForward);
}

void Camera::LightOff()
{
	m_relayCamera->Set(Relay::kReverse);
}
// Put methods for controlling this subsystem
// here. Call these from Commands.
