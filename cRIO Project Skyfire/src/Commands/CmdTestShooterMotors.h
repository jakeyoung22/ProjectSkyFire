#ifndef CMDTESTSHOOTERMOTORS_H
#define CMDTESTSHOOTERMOTORS_H

#include "../CommandBase.h"


class CmdTestShooterMotors: public CommandBase {
public:
	CmdTestShooterMotors();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
