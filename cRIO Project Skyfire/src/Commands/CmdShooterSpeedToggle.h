#ifndef CMDSHOOTERSPEEDTOGGLE_H
#define CMDSHOOTERSPEEDTOGGLE_H

#include "../CommandBase.h"

/**
 * @author 1319
 */
class CmdShooterSpeedToggle: public CommandBase {
public:
	CmdShooterSpeedToggle();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
