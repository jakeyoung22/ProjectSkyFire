/*
 * RobotMap.h
 *
 *  Created on: Sep 14, 2017
 *      Author: jakey
 */

#ifndef ROBOTMAP_H
#define ROBOTMAP_H

//Drivetrain
	const int PWM_LEFT 	= 1;
	//const int PWM_LEFT_2 	= 2;
	//const int PWM_LEFT_3 	= 3;


	const int PWM_RIGHT 	= 2;
	//const int PWM_RIGHT_2	= 5;
	//const int PWM_RIGHT_3	= 6;

//Shooter
	const UINT32 PWM_SHOOTER_1 = 3;
	const UINT32 PWM_SHOOTER_2 = 4;
	const UINT32 PWM_SHOOTER_3 = 5;

//Intake
	const int PWM_INTAKE_1 = 6;
	const int PWM_INTAKE_2 = 7;

//Motor Ramp Rate
	const double MOTOR_RAMP_RATE = 24.0;

//Solenoids
	const UINT32 SOL_SHIFT_HIGH					= 0;
	const UINT32 SOL_SHIFT_LOW					= 1;
	const UINT32 SOL_SHOOTER_LOADER 			= 2;

//Relay
	const UINT32 RELAY_COMPRESSOR					= 1;
	const UINT32 RELAY_BLING						= 2;

	const UINT32 GPIO_PRESSURE						= 14;

	const UINT32 ANALOG_PRESSURE_SENSOR				= 1;
	const UINT32 ANALOG_RANGE_FINDER				= 2;

	const float PNEUMATICS_PRESSURE_VOLTAGE_B		= 1.008;
	const float PNEUMATICS_PRESSURE_VOLTAGE_M		= 63.344;

//Encoders
	const UINT32 GPIO_LEFT_ENCODER_A 				= 1;
	const UINT32 GPIO_LEFT_ENCODER_B 				= 2;
	const UINT32 GPIO_RIGHT_ENCODER_A 				= 3;
	const UINT32 GPIO_RIGHT_ENCODER_B 				= 4;

	const UINT32 GPIO_FRONT_SHOOTER_ENCODER_A 	= 5;
	const UINT32 GPIO_FRONT_SHOOTER_ENCODER_B 	= 6;


#define SHOOTER_FRONT_ENC_CPR 32.0f
//
#define SHOOTER_SPEED_FRONT   (SHOOTER_SPEED_MAX * 0.95)
//	Speed step down from Front to middle, and again from middle to back
#define SHOOTER_SPEED_FACTOR 0.99
//	Maximum observed shooter speed
#define SHOOTER_SPEED_MAX	115
//	Time that the disc pusher should remain forward after pushing
#define SHOOTER_PUSHER_WAIT_TIME 0.3f //was 0.9f
//	Time that we should wait for the motors to spin up, if we can't use the encoder
#define SHOOTER_SPINUP_WAIT_TIME 1.5f
//	Speed at or over which OkayToShoot() should return TRUE
#define SHOOTER_OKAY_TO_SHOOT 90
//	If the PID loop isn't working, use this power setting to spin the wheels
#define SHOOTER_RAW_SPEED  1.0f
//  Slow speed for pyramid shot without PID
#define SHOOTER_SLOW_SPEED 0.8f
//	When allowing a speed stepping, incr by this.  Don't think is used.
#define SHOOTER_SPEED_INCREMENT 0.10f
//	Notes:
//	RPM of motor ~5000, 1.45 gearing ratio, 32 encoder clicks per revolution

//Encoder Math
	//Pi times Diameter
	//The wheel is a circle therefore has 360 degrees in all
	//Every revolution of the wheel is equal to circumference
	//One revolution should take the robot 25 inches or about 2 feet
	const float DRV_DIST_PER_PULSE = 8.0 * 3.1415926358979323846264338 / 360;


	//	Turn on PID in Shooter
	#define PID  false

	//	Enable the watchdog timer on all motors?
	#define SAFETY_ENABLED false

/**
 * The RobotMap is a mapping from the ports sensors and actuators are wired into
 * to a variable name. This provides flexibility changing wiring, makes checking
 * the wiring easier and significantly reduces the number of magic numbers
 * floating around.
 */

// For example to map the left and right motors, you could define the
// following variables to use with your drivetrain subsystem.
// constexpr int LEFTMOTOR = 1;
// constexpr int RIGHTMOTOR = 2;

// If you are using multiple modules, make sure to define both the port
// number and the module. For example you with a rangefinder:
// constexpr int RANGE_FINDER_PORT = 1;
// constexpr int RANGE_FINDER_MODULE = 1;

#endif  // ROBOTMAP_H
