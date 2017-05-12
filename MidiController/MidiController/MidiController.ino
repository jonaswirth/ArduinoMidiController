/*
 Name:		MidiController.ino
 Created:	5/11/2017 11:14:13 PM
 Author:	Jonas
*/

// the setup function runs once when you press reset or power the board
#include "RotaryEncoder.h"
#include "Potentiometer.h"

Potentiometer p1(0);

void setup() {

}

// the loop function runs over and over again until power down or reset
void loop() {
	p1.get_value();
}
