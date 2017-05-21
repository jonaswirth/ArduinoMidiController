// 
// 
// 

#include "Arduino.h"
#include "Potentiometer.h"
#include "MidiWriter.h"

Potentiometer::Potentiometer(int port, int controller) {
	analogPort = port;
	controllerNr = controller;
}

int Potentiometer::readSmoothValue() {
	smoothValue = 0.6 * smoothValue + 0.4 * analogRead(analogPort);
	smoothValue = map(smoothValue, 0, 1023, 0, 127);
	if (smoothValue != oldValue) {
		oldValue = smoothValue;
		return smoothValue;
	}
	else {
		return -1;
	}
}

void Potentiometer::sendIfChanged() {
	int val = readSmoothValue();
	if (val >= 0) {
		MidiWriter::sendControllChange(controllerNr, map(val, 0, 1023, 0, 127));
	}
}
