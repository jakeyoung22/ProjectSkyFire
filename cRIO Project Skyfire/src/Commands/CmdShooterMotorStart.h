#ifndef CMDSHOOTERMOTORSTART_H
#define CMDSHOOTERMOTORSTART_H

#include "../CommandBase.h"

/**
 * @author 1319
 */
class CmdShooterMotorStart: public CommandBase {
public:
	CmdShooterMotorStart();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
