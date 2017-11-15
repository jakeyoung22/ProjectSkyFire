#ifndef CMDSHOOTERPUSHERRETRACT_H
#define CMDSHOOTERPUSHERRETRACT_H

#include "../CommandBase.h"

/**
 *
 *
 * @author jakey
 */
class CmdShooterPusherRetract: public CommandBase {
public:
	CmdShooterPusherRetract();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
