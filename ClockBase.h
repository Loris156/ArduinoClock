/*
	Name:		ClockBase.h
	Created:	7/9/2017 1:28:10 AM
	Author:		Loris156
*/

#ifndef CLOCKBASE_H_
#define CLOCKBASE_H_

#if defined(ARDUINO) && ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include "TimeSpan.h"

class ClockBase
{
public:

	explicit ClockBase(unsigned long currentTime)
	{
		_microseconds = currentTime;
	}

	virtual ~ClockBase()
	{
	}

	virtual TimeSpan getElapsedTime() = 0;
	virtual TimeSpan restart() = 0;

protected:

	unsigned long _microseconds;
};
#endif //!CLOCKBASE_H_