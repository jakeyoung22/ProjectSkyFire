#ifndef Base_H
#define Base_H

#include <Commands/Subsystem.h>
#include "WPILib.h"

class Base : public Subsystem {
public:
	enum e_shift { low = 0, high = 1 };
	enum e_drivetype { arcade = 0, tank = 1 };

private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	Victor *m_leftOne, *m_leftTwo, *m_leftThree, *m_rightOne, *m_rightTwo, *m_rightThree;
	RobotDrive *m_driveOne, *m_driveTwo;
	DoubleSolenoid *m_solShift;

		e_shift m_shift;
		e_drivetype m_drivetype;
		Command *m_cmdTank, *m_cmdArcade;
	//Encoder *m_leftEncoder, *m_rightEncoder; will add encoder
public:
	Base();

	void InitDefaultCommand();

		float SpeedLeft();												//Returns the encoder speed for the left side
		float SpeedRight();												//Returns the encoder speed for the right side
		float DistanceLeft();											//Returns the encoder distance for the left side
		float DistanceRight();											//Returns the encoder distance for the right side
		bool LoaderFront();												//Returns true if the loader is the front else false
		bool SixCimDrive();												//Returns true if six CIMs are being used to drive, else false
		Base::e_shift Shift();											//Returns what gear the robot is in	ex. low, high
		Base::e_drivetype driveType();											//Returns what mode the robot is in ex. arcade, tank

		void JoystickArcadeDrive(float speed, float rotate); 			//Runs the robot in arcade mode with the speed and the rotation passed in
		void JoystickTankDrive(float speedLeft, float speedRight);		//Runs the robot in tank mode with the left and right speeds passed in
		void SetFront(bool loaderFront);								//Makes the loader the front if true else makes the shooter the front
		void SixCimDrive(bool sixCims);									//Makes the robot drive with six CIMs if passed true, else four CIMs
		void Shift(Base::e_shift shift);									//Sets the robot into the gear passed in
		void driveType(Base::e_drivetype drivetype);									//Sets the robot to the mode passed in
		void Stop();
};

#endif  // Base_H
