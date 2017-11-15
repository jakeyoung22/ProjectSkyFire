/*
 * buttons.h
 *
 *  Created on: Sep 28, 2017
 *      Author: jakey
 */

#ifdef BUTTON_HEADERS

//Includes
#include "Commands/CmdDriveChangeMode.h"
#include "Commands/CmdDriveShiftToggle.h"
#include "Commands/CmdBlingToggle.h"
#include "Commands/CmdBlingOnToggle.h"
#include "Commands/CmdShooterMotorStart.h"
#include "Commands/CmdShooterMotorStop.h"
#include "Commands/CgLoaderAction.h"

#else
//Driver
BUTTON_SETUP(m_driveShiftButton, m_Driver, DRV_GEAR_SHIFT, WhenPressed, CmdDriveShiftToggle, )
BUTTON_SETUP(m_driveModeButton , m_Driver, DRV_MODE_CHANGE, WhenPressed, CmdDriveChangeMode, )
BUTTON_SETUP(m_driveBlingToggleButton , m_Driver, DRV_BLING_TOGGLE, WhenPressed, CmdBlingToggle,)
BUTTON_SETUP(m_driveShooterStart, m_Driver, DRV_START_SHOOTER, WhenPressed, CmdShooterMotorStart,)
BUTTON_SETUP(m_driveShooterStop, m_Driver, DRV_STOP_SHOOTER, WhenPressed, CmdShooterMotorStop,)
BUTTON_SETUP(m_driveShooterShot, m_Driver, DRV_FEED_SHOOTER, WhenPressed, CgLoaderAction,)


#endif

//Operator


 /* BUTTONS_H_ */
