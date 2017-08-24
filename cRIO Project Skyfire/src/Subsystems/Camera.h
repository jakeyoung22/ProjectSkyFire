#ifndef Camera_H
#define Camera_H

#include <Commands/Subsystem.h>
#include "WPILib.h"

class Camera : public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities

public:
	Camera();
	void InitDefaultCommand();
};

#endif  // Camera_H
