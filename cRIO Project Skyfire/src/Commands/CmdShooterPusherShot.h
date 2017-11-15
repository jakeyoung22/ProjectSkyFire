#ifndef CmdShooterPusherShot_H
#define CmdShooterPusherShot_H

#include "../CommandBase.h"

/**
 *
 *
 * @author jakey
 */
class CmdShooterPusherShot: public CommandBase {
public:
	CmdShooterPusherShot();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
