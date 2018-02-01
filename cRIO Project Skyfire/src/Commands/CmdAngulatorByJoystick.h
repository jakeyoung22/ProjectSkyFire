#ifndef CMDANGULATORBYJOYSTICK_H
#define CMDANGULATORBYJOYSTICK_H

#include "../CommandBase.h"

/**
 *
 *
 * @author WindRiver
 */
class CmdAngulatorByJoystick: public CommandBase {
public:
	CmdAngulatorByJoystick();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
		
	

protected:
	float m_speed;
	
};

#endif
