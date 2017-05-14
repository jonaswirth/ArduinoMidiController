/*
 Name:		MidiController.ino
 Created:	5/11/2017 11:14:13 PM
 Author:	Jonas
*/

// the setup function runs once when you press reset or power the board
#include "RotaryEncoder.h"
#include "Potentiometer.h"

Potentiometer p1(0);
Potentiometer p2(1);
Potentiometer p3(2);

void setup() {
	Serial.begin(9600);
	Serial.println("Start");
}

// the loop function runs over and over again until power down or reset
void loop() {
	int p1val = p1.readSmoothValue(true);
	if (p1val >= 0) {
		Serial.println(p1val);
	}

	int p2val = p2.readSmoothValue(true);
	if (p2val >= 0) {
		Serial.println(p2val);
	}

	int p3val = p3.readSmoothValue(true);
	if (p3val >= 0) {
		Serial.println(p3val);
	}
}
