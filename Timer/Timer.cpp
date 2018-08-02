/*
	Timer.cpp library for keeping track of time 
	Created by 			Geir Hilmersen 12 July 2018
	improved upon by..	[Type your name here if relevant]
	Use as you please, feel free to change content and add yourself as an author,
	but please do not delete other authors.
*/

#include "Arduino.h"
#include "Timer.h"

Timer::Timer(){
	
}

Timer::Timer(unsigned long timeIntervalToRepeatMillis){
	_timeIntervalToRepeatMillis = timeIntervalToRepeatMillis;
	resetTimer();
}

void Timer::resetTimer(){
	_startTimeMillis = millis();
}

bool Timer::hasTimeIntervalPassed(){
		if(_timeIntervalToRepeatMillis < (millis() - _startTimeMillis)){
			resetTimer();
			return true;
		} else {
			return false;
		}
}