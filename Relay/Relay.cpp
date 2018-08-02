/*
	Relay.cpp - Library for using relays and keeping track of their state
	Created by 			Geir Hilmersen 12 July 2018
	improved upon by..	[Type your name here if relevant]
	Use as you please, feel free to change content and add yourself as an author,
	but please do not delete other authors.
*/

#include "Arduino.h"
#include "Relay.h"

//sets pinmode to output so the pin can be used to control the relay.
Relay::Relay(int pin, bool state_isOpen){
	pinMode(pin, OUTPUT);
	_pin = pin;
	_isOpen = state_isOpen;
	writeStateToPin();
}

void Relay::setOpen(){
	_isOpen = true;
	digitalWrite(_pin, LOW);
}

void Relay::setClosed() {
	_isOpen = false;
	digitalWrite(_pin, HIGH);
}

//If the circuit of the relay is open, close it, otherwise open it.
void Relay::swapState() {
	if(_isOpen){
		setClosed();
	} else {
		setOpen();
	}
}

bool Relay::isOpen () {
	return _isOpen;
}

//Sets the state to match _isOpen variable
//if _isOpen == true, keep circuit open.
//if _isOpen != true, close circuit.
void Relay::writeStateToPin() {
	if(_isOpen){
		digitalWrite(_pin, LOW);
	} else {
		digitalWrite(_pin, HIGH);
	}
}