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
	return value;
}
