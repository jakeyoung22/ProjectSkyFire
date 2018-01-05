#ifndef CmdCarHornOn_H
#define CmdCarHornOn_H

#include "../CommandBase.h"

/**
 *
 *
 * @author jakey
 */
class CmdCarHornOn: public CommandBase {
public:
	CmdCarHornOn();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
