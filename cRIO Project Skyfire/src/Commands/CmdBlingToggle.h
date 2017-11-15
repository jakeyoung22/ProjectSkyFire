/*
 * CmdBlingToggle.h
 *
 *  Created on: Oct 24, 2017
 *      Author: jakey
 */

#ifndef COMMANDS_CMDBLINGTOGGLE_H_
#define COMMANDS_CMDBLINGTOGGLE_H_

#include "../CommandBase.h"


class CmdBlingToggle: public CommandBase {
public:
	CmdBlingToggle();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};





#endif /* COMMANDS_CMDBLINGTOGGLE_H_ */
