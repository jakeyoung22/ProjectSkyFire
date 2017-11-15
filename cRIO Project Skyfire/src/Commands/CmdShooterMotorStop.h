#ifndef CMDSHOOTERMOTORSTOP_H
#define CMDSHOOTERMOTORSTOP_H

#include "../CommandBase.h"

/**
 * @author jakey
 */
class CmdShooterMotorStop: public CommandBase {
public:
	CmdShooterMotorStop();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
