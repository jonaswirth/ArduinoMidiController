// Multiplexer.h

#ifndef _MULTIPLEXER_h
#define _MULTIPLEXER_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif
#include "Potentiometer.h"
class Multiplexer {
private:
	const Potentiometer potentiometers [8];

};

#endif

