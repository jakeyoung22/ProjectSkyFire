#include "Utilities.h"
#include "Math.h"
#include "DriverStation.h"

//	Returns the "sign" of a number:  negative numbers return -1; positive, +1; zero, 0.
float sign( float x)
{
	return (x < 0 ? -1 : x > 0 ? 1 : 0);
}

//	Returns whether the value is within tolerance of desiredValue... fuzzy equals.
bool InTolerance( float value, float desiredValue, float tolerance)
{
	float diff = fabs( value - desiredValue );
	return (diff < tolerance);
}

//	Returns the lower of the two parameters
float minf( float a, float b)
{
	return (a < b ? a : b);
}

/* Uses the first three digital inputs of the driver station to return a number
 * from 0-7 so that we can use it for autonomous or other selections if we need
 * or want to
 */
int DriverStationSelection()
{
	return (DriverStation::GetInstance()->GetDigitalIn(3) << 2 |
		    DriverStation::GetInstance()->GetDigitalIn(2) << 1 |
		    DriverStation::GetInstance()->GetDigitalIn(1));
}
/*
 * Computes the ending packet number at which we'll stop
 */
UINT64 EndPacketNumber( float waitInSeconds )
{
	return DriverStation::GetInstance()->GetPacketNumber() + (int)(waitInSeconds * PACKETS_PER_SECOND);
}
