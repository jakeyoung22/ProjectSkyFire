#include "Utilities.h"
#include "Math.h"

bool InTolerance(float value, float desiredValue, float tolerance) {
	float diff = fabs(value - desiredValue);
	return (diff < tolerance);
}

float Sign(float input) {
	return (input < 0 ? -1 : input > 0 ? 1 : 0);
}
