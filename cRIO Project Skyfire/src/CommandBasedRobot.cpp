/*
 * CommandBasedRobot.cpp
 *
 *  Created on: Sep 14, 2017
 *      Author: jakey
 */
#include "WPILib.h"

#include "CommandBase.h"
#include "Commands/Command.h"
#include "Commands/CmdDriveChangeMode.h"

#include "Utilities.h"

#include "Subsystems/Pneumatics.h"

#include <dirent.h>


/**
 * This starter template is for building a robot program from the
 * IterativeRobot base class.  This template does nothing - it merely
 * provides method stubs that you can use to begin your implementation.
 */
class CommandBasedRobot : public IterativeRobot {

private:
	Command *autonomousCommand;
		//LiveWindow *lw;
	Pneumatics *pneumatics;

	SendableChooser *sc;
public:
	CommandBasedRobot()
		{
		cout << "CommandBasedRobot Constructor..." << std::endl;
				autonomousCommand = NULL;
				//lw = NULL;
				pneumatics = NULL;
				sc = NULL;
		}

/**
 * Robot-wide initialization code should go here.
 *
 * Use this method for default Robot-wide initialization which will
 * be called when the robot is first powered on.  It will be called exactly 1 time.
 */
private:
virtual void RobotInit() {
	CommandBase::init();
		//lw = LiveWindow::GetInstance();
		pneumatics = new Pneumatics();
		pneumatics->Start();
		printf("Robot initialized.\n");

		cout << "CommandBasedRobot::RobotInit complete." << std::endl;
}

/**
 * Initialization code for disabled mode should go here.
 *
 * Use this method for initialization code which will be called each time
 * the robot enters disabled mode.
 */

void DisabledInit() {

	cout << "**********************" << std::endl << "Enter Disabled Init" << std::endl;
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
	if(autonomousCommand != NULL) {
					autonomousCommand->Cancel();
				}
		//		CommandBase::shooter->SetCameraLED(true);



				printf("Teleop mode initialized.\n");

}

/**
 * Periodic code for teleop mode should go here.
 *
 * Use this method for code which will be called periodically at a regular
 * rate while the robot is in teleop mode.
 */
void TeleopPeriodic() {
	Scheduler::GetInstance()->Run();

}

/**
 * Initialization code for test mode should go here.
 *
 * Use this method for initialization code which will be called each time
 * the robot enters test mode.
 */
void TestInit() {
	cout << "**********************" << std::endl << "Entering Test Init" << std::endl;
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
START_ROBOT_CLASS(CommandBasedRobot);

