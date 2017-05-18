// MidiWriter.h

#ifndef _MIDIWRITER_h
#define _MIDIWRITER_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif
class MidiWriter {
private:
	static const int controllChange = 176;
public:
	static void sendControllChange(int controllerNr, int value);
};


#endif

