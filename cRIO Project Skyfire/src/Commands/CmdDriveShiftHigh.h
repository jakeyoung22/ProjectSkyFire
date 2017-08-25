#ifndef CMDDRIVESHIFTHIGH_H
#define CMDDRIVESHIFTHIGH_H

#include "../CommandBase.h"

/**
 * @author Flash 1319
 */
class CmdDriveShiftHigh: public CommandBase {
public:
	CmdDriveShiftHigh();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
