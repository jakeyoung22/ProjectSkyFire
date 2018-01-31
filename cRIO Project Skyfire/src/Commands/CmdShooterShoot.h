#ifndef CMDSHOOTERSHOOT_H
#define CMDSHOOTERSHOOT_H

#include "../CommandBase.h"

/**
 * @author 1319
 */
class CmdShooterShoot: public CommandBase {
private:
	UINT32 endPacketNumber;
	float  m_waitTime;
public:
	CmdShooterShoot( float waitTime = SHOOTER_PUSHER_WAIT_TIME);
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
	
	virtual void RecordInitialize();
	virtual void LoadInitData( tinyxml2::XMLElement *data );
};

#endif
