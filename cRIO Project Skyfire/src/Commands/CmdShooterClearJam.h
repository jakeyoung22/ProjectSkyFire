#ifndef CMDSHOOTERCLEARJAM_H
#define CMDSHOOTERCLEARJAM_H

#include "../CommandBase.h"

/**
 *
 *
 * @author WindRiver
 */
class CmdShooterClearJam: public CommandBase {
private:
	UINT32 endPacketNumber;
	float  m_waitTime;
public:
	CmdShooterClearJam( float waitTime );
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
