/*
 * Shooter.h
 *
 *  Created on: Nov 13, 2017
 *      Author: jakey
 */

#ifndef SUBSYSTEMS_SHOOTER_H_
#define SUBSYSTEMS_SHOOTER_H_


#include <Commands/Subsystem.h>
#include "WPILib.h"


class Shooter : public Subsystem {
public:

private:
	Victor	*m_frontMotor, *m_middleMotor, *m_backMotor;

	Solenoid *m_Pusher;

	float m_shooterRawSpeed;

public:

	Shooter();

	void InitDefaultCommand();

	void Stop();
	void PushDisc( bool );	// Pushes bottom disc into rear motor, aka SHOOT!
	void ShooterRawStart(float speed);
	void SpeedIncrease();
	void SpeedDecrease();


};

#endif /* SUBSYSTEMS_SHOOTER_H_ */
