#ifndef CMDSHOOTERSHOOT_H
#define CMDSHOOTERSHOOT_H

#include "../CommandBase.h"

/**
 * @author jakey
 */
class CmdShooterShoot: public CommandBase {
public:
	CmdShooterShoot();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
