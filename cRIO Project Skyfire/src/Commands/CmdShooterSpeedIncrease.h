#ifndef CMDSHOOTERSPEEDINCREASE_H
#define CMDSHOOTERSPEEDINCREASE_H

#include "../CommandBase.h"

/**
 * @author 1319
 */
class CmdShooterSpeedIncrease: public CommandBase {
public:
	CmdShooterSpeedIncrease();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
