#include "ArduinoClock.h"

ArduinoClock::ArduinoClock()
	: ClockBase(millis())
{
}

ArduinoClock::~ArduinoClock()
{
}

TimeSpan ArduinoClock::getElapsedTime()
{
	return TimeSpan((millis() - _microseconds) * 1000);
}

TimeSpan ArduinoClock::restart()
{
	TimeSpan temp((millis() - _microseconds) * 1000);
	_microseconds = millis();
	return temp;
}