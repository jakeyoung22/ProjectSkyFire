#ifndef CMDSHOOTERSPEEDDECREASE_H
#define CMDSHOOTERSPEEDDECREASE_H

#include "../CommandBase.h"

/**
 * @author 1319
 */
class CmdShooterSpeedDecrease: public CommandBase {
public:
	CmdShooterSpeedDecrease();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
