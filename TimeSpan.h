/*
	Name:		TimeSpan.h
	Created:	7/9/2017 1:34:24 AM
	Author:		Loris156
*/

#ifndef TIMESPAN_H_
#define TIMESPAN_H_

#if defined(ARDUINO) && ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif

class TimeSpan
{
public:
	TimeSpan();
	explicit TimeSpan(unsigned long microseconds);
	~TimeSpan();

	unsigned long asMicroseconds() const;
	unsigned long asMilliseconds() const;
	float asSeconds() const;
	float asMinutes() const;
	float asHours() const;

private:

	unsigned long _microseconds;
};
#endif // !TIMESPAN_H_