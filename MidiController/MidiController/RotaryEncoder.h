// RotaryEncoder.h

#ifndef _ROTARYENCODER_h
#define _ROTARYENCODER_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif
class RotaryEncoder {
private:
	int clockwisePort;
	int counterClockwisePort;
public:
	RotaryEncoder(int clockwise, int counterClockwise);
	int read();
};

#endif

