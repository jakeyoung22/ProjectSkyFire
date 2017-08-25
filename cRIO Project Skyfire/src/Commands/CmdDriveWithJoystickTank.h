#ifndef CMDDRIVEWITHJOYSTICKTANK_H
#define CMDDRIVEWITHJOYSTICKTANK_H

#include "../CommandBase.h"

/**
 * @author Flash 1319
 */
class CmdDriveWithJoystickTank: public CommandBase {
private:
	float m_left, m_right;
	
	void ReadJoysticks();
public:
	CmdDriveWithJoystickTank();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
