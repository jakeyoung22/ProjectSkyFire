#ifndef UTILITIES_H
#define UTILITIES_H

#include <types.h>

#define PACKETS_PER_SECOND  50

float sign( float x);
bool InTolerance( float value, float desiredValue, float tolerance);
float minf( float a, float b);
int DriverStationSelection();
UINT64 EndPacketNumber( float waitInSeconds );

#endif
