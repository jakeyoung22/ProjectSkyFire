#ifndef CMDDRIVESHIFTLOW_H
#define CMDDRIVESHIFTLOW_H

#include "../CommandBase.h"

/**
 * @author Flash 1319
 */
class CmdDriveShiftLow: public CommandBase {
public:
	CmdDriveShiftLow();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
