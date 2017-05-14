// 
// 
// 

#include "Arduino.h"
#include "Potentiometer.h"

Potentiometer::Potentiometer(int port) {
	analogPort = port;
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
		Serial.println(val);
	}
}
