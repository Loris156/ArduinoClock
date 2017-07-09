#include "TimeSpan.h"

TimeSpan::TimeSpan()
{
	_microseconds = 0;
}

TimeSpan::TimeSpan(unsigned long microseconds)
{
	_microseconds = microseconds;
}

TimeSpan::~TimeSpan()
{
}

unsigned long TimeSpan::asMicroseconds() const
{
	return _microseconds;
}

unsigned long TimeSpan::asMilliseconds() const
{
	return _microseconds / 1000;
}

float TimeSpan::asSeconds() const
{
	return _microseconds / 1000000.f;
}

float TimeSpan::asMinutes() const
{
	return _microseconds / 60000000.f;
}

float TimeSpan::asHours() const
{
	return _microseconds / 3600000000.f;
}