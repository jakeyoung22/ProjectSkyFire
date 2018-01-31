#ifndef CMDSHOOTERMOTORTOGGLE_H
#define CMDSHOOTERMOTORTOGGLE_H

#include "../CommandBase.h"
#include "CmdShooterMotorStart.h"
#include "CmdShooterMotorStop.h"

/**
 * @author 1319
 */
class CmdShooterMotorToggle: public CommandBase {
public:
	CmdShooterMotorToggle();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
