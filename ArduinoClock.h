/*
	Name:		ArduinoClock.h
	Created:	7/9/2017 1:18:21 AM
	Author:		Loris156
*/

#ifndef ARDUINOCLOCK_H_
#define ARDUINOCLOCK_H_

#if defined(ARDUINO) && ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif

#include "ClockBase.h"

class ArduinoClock
	: public ClockBase
{
public:
	ArduinoClock();
	~ArduinoClock();

	TimeSpan getElapsedTime() override;
	TimeSpan restart() override;
};
#endif //!ARDUINOCLOCK_H_