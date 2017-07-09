/*
	Name:		Stopwatch.h
	Created:	7/9/2017 2:40:48 AM
	Author:		Loris156
*/

#ifndef STOPWATCH_H_
#define STOPWATCH_H_

#if defined(ARDUINO) && ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif

#include "TimeSpan.h"
#include "ClockBase.h"

class Stopwatch
{
public:
	Stopwatch() = delete;
	explicit Stopwatch(ClockBase& clock, bool running = false);

	void start();
	void pause();
	void switchState();

	bool isRunning() const;

	TimeSpan getElapsedTime() const;

	TimeSpan reset();
	TimeSpan restart();

protected:

	ClockBase& _clock;
	unsigned long _timeBuffer;
	bool _running;
};
#endif // !STOPWATCH_H_