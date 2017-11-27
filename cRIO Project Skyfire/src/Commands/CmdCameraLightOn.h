#ifndef CmdCameraLightOn_H
#define CmdCameraLightOn_H

#include "../CommandBase.h"

/**
 *
 *
 * @author jakey
 */
class CmdCameraLightOn: public CommandBase {
public:
	CmdCameraLightOn();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
