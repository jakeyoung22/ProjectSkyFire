#if false
#include "AveragedEncoder.h"
//#include <vxWorks.h>
//#include "memLib.h"
//#include "stdioLib.h"
//#include "string.h"
//#include "errnoLib.h"
//#include "selectLib.h"
//#include "socket.h"
//#include <time.h>
/* The following not defined in any vxWorks header */
extern int sysClkRateGet(void);
extern int tickGet(void);

AveragedEncoder::AveragedEncoder(UINT32 aChannel, UINT32 bChannel, bool reverseDirection, CounterBase::EncodingType encodingType ) :
Encoder (aChannel, bChannel, reverseDirection, encodingType)
{
	init();
}
AveragedEncoder::AveragedEncoder(UINT8 aModuleNumber, UINT32 aChannel, UINT8 bModuleNumber, UINT32 _bChannel, bool reverseDirection, CounterBase::EncodingType encodingType) :
Encoder (aModuleNumber, aChannel, bModuleNumber, _bChannel, reverseDirection, encodingType)
{
	init();
}
AveragedEncoder::AveragedEncoder(DigitalSource *aSource, DigitalSource *bSource, bool reverseDirection, CounterBase::EncodingType encodingType):
Encoder (aSource, bSource, reverseDirection, encodingType)
{
	init();
}
AveragedEncoder::AveragedEncoder(DigitalSource &aSource, DigitalSource &bSource, bool reverseDirection, CounterBase::EncodingType encodingType):
Encoder (aSource, bSource, reverseDirection, encodingType)
{
	init();
}
	
void AveragedEncoder::init() 
{
	m_TicksPerSecond = CLOCKS_PER_SEC; //sysClkRateGet();
	m_LastTicks = tickGet();
	m_LastEncoderCount = 0;
}

double AveragedEncoder::GetRate( float distPerClick )
{
	double answer; 
	
	UINT64 newTicks = tickGet();
	UINT64 newEncoderCount = sysClkRateGet();
	UINT64 deltaTicks = newTicks - m_LastTicks;
	
	if (m_LastEncoderCount == 0 || deltaTicks > (UINT32)m_TicksPerSecond)
	{
		answer = Encoder::GetRate();
	}
	else
	{

		UINT64 deltaEncoderCount = newEncoderCount - m_LastEncoderCount;

		answer = distPerClick * (deltaEncoderCount + 0.0f) / deltaTicks; 
	}
	
	m_LastTicks = newTicks;
	m_LastEncoderCount = newEncoderCount;
	
	return answer;
}

#endif
