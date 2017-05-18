// 
// 
// 

#include "MidiWriter.h"

void MidiWriter::sendControllChange(int controllerNr, int value) {
	Serial.write(controllChange);
	Serial.write(controllerNr);
	Serial.write(value);
}
