/*
 * robot.cpp
 *
 *  Created on: Sep 14, 2017
 *      Author: jakey
 */

#include "WPILib.h"
#include "Commands/Command.h"
#include "CommandBase.h"
#include "Subsystems/Pneumatics.h"
#include "Commands/CmdDriveChangeMode.h"


/**
 * This starter template is for building a robot program from the
 * IterativeRobot base class.  This template does nothing - it merely
 * provides method stubs that you can use to begin your implementation.
 */
class IterativeRobotDemo : public IterativeRobot
{
private:
	Pneumatics *pneumatics;
	Command *autonomousCommand;
public:
	IterativeRobotDemo()
	{

	}

/**
 * Robot-wide initialization code should go here.
 *
 * Use this method for default Robot-wide initialization which will
 * be called when the robot is first powered on.  It will be called exactly 1 time.
 */
virtual void RobotInit() {
	CommandBase::init();
	autonomousCommand = NULL;
	pneumatics = new Pneumatics();
	pneumatics->Start();
}

/**
 * Initialization code for disabled mode should go here.
 *
 * Use this method for initialization code which will be called each time
 * the robot enters disabled mode.
 */
void DisabledInit() {
}

/**
 * Periodic code for disabled mode should go here.
 *
 * Use this method for code which will be called periodically at a regular
 * rate while the robot is in disabled mode.
 */
void DisabledPeriodic() {
}

/**
 * Initialization code for autonomous mode should go here.
 *
 * Use this method for initialization code which will be called each time
 * the robot enters autonomous mode.
 */
void AutonomousInit() {
}

/**
 * Periodic code for autonomous mode should go here.
 *
 * Use this method for code which will be called periodically at a regular
 * rate while the robot is in autonomous mode.
 */
void AutonomousPeriodic() {
}

/**
 * Initialization code for teleop mode should go here.
 *
 * Use this method for initialization code which will be called each time
 * the robot enters teleop mode.
 */
void TeleopInit() {

}

/**
 * Periodic code for teleop mode should go here.
 *
 * Use this method for code which will be called periodically at a regular
 * rate while the robot is in teleop mode.
 */
void TeleopPeriodic() {
}

/**
 * Initialization code for test mode should go here.
 *
 * Use this method for initialization code which will be called each time
 * the robot enters test mode.
 */
void TestInit() {
}

/**
 * Periodic code for test mode should go here.
 *
 * Use this method for code which will be called periodically at a regular
 * rate while the robot is in test mode.
 */
void TestPeriodic() {
}

};

/*
 * This macro invocation tells WPILib that the named class is your "main" robot class,
 * providing an entry point to your robot code.
 */
START_ROBOT_CLASS(IterativeRobotDemo);

