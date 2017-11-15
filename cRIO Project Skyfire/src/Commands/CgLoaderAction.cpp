#include "CgLoaderAction.h"

#include "CmdShooterPusherShot.h"
#include "CmdShooterPusherRetract.h"


CgLoaderAction::CgLoaderAction() {
	AddSequential(new CmdShooterPusherShot());
	AddSequential(new WaitCommand(.5));
	AddSequential(new CmdShooterPusherRetract());

}
