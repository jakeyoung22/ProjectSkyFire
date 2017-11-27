#ifndef CmdCameraLightOff_H
#define CmdCameraLightOff_H

#include "../CommandBase.h"

/**
 *
 *
 * @author jakey
 */
class CmdCameraLightOff: public CommandBase {
public:
	CmdCameraLightOff();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
