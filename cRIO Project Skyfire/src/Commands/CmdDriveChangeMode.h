/*
 * CmdDriveChangeMode.h
 *
 *  Created on: Sep 14, 2017
 *      Author: jakey
 */

#ifndef CMDDRIVECHANGEMODE_H
#define CMDDRIVECHANGEMODE_H

#include "../CommandBase.h"

/**
 * @author Flash 1319
 */
class CmdDriveChangeMode: public CommandBase {
public:
	CmdDriveChangeMode();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
