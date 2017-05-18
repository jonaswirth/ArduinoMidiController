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

int Potentiometer::get_analogPort() {
	return analogPort;
}

void Potentiometer::set_analogPort(int port) {
	analogPort = port;
}

int Potentiometer::get_value() {
	value = analogRead(analogPort);
	oldValue = value;
	return value;
}

int Potentiometer::readSmoothValue(bool onlyIfChanged) {
	smoothValue = 0.6 * smoothValue + 0.4 * analogRead(analogPort);
	if (!onlyIfChanged) {
		return smoothValue;
	}
	else {
		if (smoothValue != oldValue) {
			oldValue = smoothValue;
			return smoothValue;
		}
		else {
			return -1;
		}
	}
}

void Potentiometer::sendIfChanged() {
	int val = readSmoothValue(true);
	if (val >= 0) {
		MidiWriter::sendControllChange(controllerNr, map(val, 0, 1023, 0, 127));
	}
}
