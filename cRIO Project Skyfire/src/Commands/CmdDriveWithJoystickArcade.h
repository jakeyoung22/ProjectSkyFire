#ifndef CMDDRIVEWITHJOYSTICKARCADE_H
#define CMDDRIVEWITHJOYSTICKARCADE_H

#include "../CommandBase.h"

/**
 * @author Flash 1319
 */
class CmdDriveWithJoystickArcade: public CommandBase {
private:
	float m_speed, m_rotate;

	void ReadJoystick();
public:
	CmdDriveWithJoystickArcade();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
