#ifndef CMDSHOOTERWAITFORSPEED_H
#define CMDSHOOTERWAITFORSPEED_H

#include "../CommandBase.h"

/**
 *
 *
 * @author WindRiver
 */
class CmdShooterWaitForSpeed: public CommandBase {
private:

	//UINT32 basePacketNumber;
public:
	CmdShooterWaitForSpeed();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
