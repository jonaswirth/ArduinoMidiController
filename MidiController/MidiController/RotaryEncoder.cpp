// 
// 
// 

#include "RotaryEncoder.h"

RotaryEncoder::RotaryEncoder(int clockwise, int counterClockwise, int controller) {
	clockwisePort = clockwise;
	counterClockwisePort = counterClockwise;
	controllerNr = controller;
}

void RotaryEncoder::readAndSend() {
	
}


