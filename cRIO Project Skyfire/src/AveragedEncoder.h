#ifndef _AVERAGEDENCODER_H_
#define _AVERAGEDENCODER_H_

#include "encoder.h"


class AveragedEncoder: public Encoder
{
private:
	
	int m_TicksPerSecond;
	UINT64 m_LastTicks;
	UINT64 m_LastEncoderCount;
	
	void init();
	
public:
	double GetRate( float distPerClick );
	
	AveragedEncoder(UINT32 aChannel, UINT32 bChannel, bool reverseDirection=false, CounterBase::EncodingType encodingType = k4X);
	AveragedEncoder(UINT8 aModuleNumber, UINT32 aChannel, UINT8 bModuleNumber, UINT32 _bChannel, bool reverseDirection=false, CounterBase::EncodingType encodingType = k4X);
	AveragedEncoder(DigitalSource *aSource, DigitalSource *bSource, bool reverseDirection=false, CounterBase::EncodingType encodingType = k4X);
	AveragedEncoder(DigitalSource &aSource, DigitalSource &bSource, bool reverseDirection=false, CounterBase::EncodingType encodingType = k4X);


};

#endif
