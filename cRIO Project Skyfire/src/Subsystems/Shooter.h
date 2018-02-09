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
#include "../robotmap.h"


class Shooter : public PIDSubsystem {
public:

	enum e_pusher { unknown=0, shoot=1, retract=2};
private:
	e_pusher m_Pusher;

	static const double Kp = 0.3;	//todo: These are WRONG... get better numbers
	static const double Ki = 0.005;
	static const double Kd = 0.002;
	static const double Kf = 0.8;

	Victor	*m_frontMotor, *m_middleMotor, *m_backMotor;
	Encoder *m_frontEncoder;

	DoubleSolenoid *m_SOLPusher;

	float m_targetSpeedFront;

	float m_shooterRawSpeed;

	bool m_running;

public:

	Shooter();

	double ReturnPIDInput();
	void UsePIDOutput(double output);
	void InitDefaultCommand();

	//	Properties
	float FrontMotorSpeed();	// in RPM?  %of max RPM or encoder rate?
	bool  OkayToShoot();

	float FrontMotorRawSpeed(); //returns the raw speed the front motor is set at

	float FrontMotorTargetSpeed();

	//	Methods
	void RunMotors( float frontSpeed=SHOOTER_SPEED_FRONT );
	void SetRawMotorSpeed( float frontSpeed );	// This is for internal use, and testing only
	void StopMotors();


	void ShowMotorSpeed();
	void ShowDiscLoaded();

	void PlaceSensorsOnLiveWindow( LiveWindow *lw );

	void IncreaseShooterSpeed();
	void DecreaseShooterSpeed();

	void SetBackMotorOnly( float speed );

	void MotorSpeedToggle();

	void PeriodicCheck();

	Shooter::e_pusher Pusher();	// Returns the Pusher setting


	void Pusher( Shooter::e_pusher value );	// Sets the Pusher to new value


};

#endif /* SUBSYSTEMS_SHOOTER_H_ */
