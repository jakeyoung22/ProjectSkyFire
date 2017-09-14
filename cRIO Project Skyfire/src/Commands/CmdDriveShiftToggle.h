/*
 * CmdDriveShiftToggle.h
 *
 *  Created on: Sep 14, 2017
 *      Author: jakey
 */

#ifndef CMDDRIVESHIFTTOGGLE_H
#define CMDDRIVESHIFTTOGGLE_H

#include "../CommandBase.h"

/**
 * @author Flash 1319
 */
class CmdDriveShiftToggle: public CommandBase {
private:
	Command *c;
public:
	CmdDriveShiftToggle();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
