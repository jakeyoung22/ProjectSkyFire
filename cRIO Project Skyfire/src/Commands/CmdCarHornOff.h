#ifndef CmdCarHornOff_H
#define CmdCarHornOff_H

#include "../CommandBase.h"

/**
 *
 *
 * @author jakey
 */
class CmdCarHornOff: public CommandBase {
public:
	CmdCarHornOff();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
