/*
 Name:		MidiController.ino
 Created:	5/11/2017 11:14:13 PM
 Author:	Jonas
*/

// the setup function runs once when you press reset or power the board
#include "MidiWriter.h"
#include "RotaryEncoder.h"
#include "Potentiometer.h"

Potentiometer bass1(0, 20);
Potentiometer mid1(1, 18);
Potentiometer treble1(2, 16);
Potentiometer bass2(3, 21);
Potentiometer mid2(4, 19);

RotaryEncoder r1(0, 1, 25);
RotaryEncoder r2(2, 3, 24);

void setup() {
	Serial.begin(9600);
	Serial.println("Start");
}

// the loop function runs over and over again until power down or reset
void loop() {
	bass1.sendIfChanged();
	mid1.sendIfChanged();
	treble1.sendIfChanged();
	bass2.sendIfChanged();
	mid2.sendIfChanged();
}
