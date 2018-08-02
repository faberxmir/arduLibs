/*
	Relay.h - Library for using relays and keeping track of their state
	Created by 			Geir Hilmersen 12 July 2018
	improved upon by..	[Type your name here if relevant]
	Use as you please, feel free to change content, but keep track of authors.
*/

#ifndef Relay_h
#define Relay_h

#include "Arduino.h"

class Relay 
{
	public:
		Relay(int pin, bool state_isOpen);
		void setOpen();
		void setClosed();
		void swapState();
		bool isOpen();
	private:
		int _pin;
		bool _isOpen;
		void writeStateToPin();
};

#endif