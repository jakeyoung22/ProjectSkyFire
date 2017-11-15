#ifndef CMDSHOOTERMOTORSTART_H
#define CMDSHOOTERMOTORSTART_H

#include "../CommandBase.h"

/**
 * @author jakey
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
