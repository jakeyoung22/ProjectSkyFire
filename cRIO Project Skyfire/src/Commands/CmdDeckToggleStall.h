#ifndef CMDDECKTOGGLESTALL_H
#define CMDDECKTOGGLESTALL_H

#include "../CommandBase.h"

/**
 * @author 1319
 */
class CmdDeckToggleStall: public CommandBase {
public:
	CmdDeckToggleStall();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
