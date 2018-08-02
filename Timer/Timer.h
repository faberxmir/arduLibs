/*
	Timer.h library for keeping track of time 
	Created by 			Geir Hilmersen 12 July 2018
	improved upon by..	[Type your name here if relevant]
	Use as you please, feel free to change content and add yourself as an author,
	but please do not delete other authors.
*/

#ifndef Timer_h
#define Timer_h

#include "Arduino.h"

class Timer {
	
	public:
		Timer();
		Timer(unsigned long timeIntervalToRepeatMillis);
		void resetTimer();
		bool hasTimeIntervalPassed();
	private:
		unsigned long _startTimeMillis;
		unsigned long _timeIntervalToRepeatMillis;
};

#endif