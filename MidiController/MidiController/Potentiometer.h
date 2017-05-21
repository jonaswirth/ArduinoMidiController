// Potentiometer.h

#ifndef _POTENTIOMETER_h
#define _POTENTIOMETER_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif

class Potentiometer {
private:
	int analogPort;
	int value;
	int oldValue;
	int smoothValue;
	int controllerNr;
public:
	Potentiometer(int port, int controller);
	int readSmoothValue();
	void sendIfChanged();
};

#endif

