#include "Stopwatch.h"

Stopwatch::Stopwatch(ClockBase& clock, bool running)
	: _clock(clock), _timeBuffer(0), _running(running)
{
	if (_running)
		start();
}

void Stopwatch::start()
{
	if (_running) return;
	_running = true;
	_clock.restart();
}

void Stopwatch::pause()
{
	if (!_running) return;
	_running = false;
	_timeBuffer += _clock.getElapsedTime().asMicroseconds();
}

void Stopwatch::switchState()
{
	if (_running)
		pause();
	else
		start();
}

bool Stopwatch::isRunning() const
{
	return _running;
}

TimeSpan Stopwatch::getElapsedTime() const
{
	if (_running)
		return TimeSpan(_timeBuffer + _clock.getElapsedTime().asMicroseconds());
	return TimeSpan(_timeBuffer);
}

TimeSpan Stopwatch::reset()
{
	TimeSpan elapsed = getElapsedTime();
	_timeBuffer = 0;
	_running = false;
	return elapsed;
}

TimeSpan Stopwatch::restart()
{
	TimeSpan elapsed = getElapsedTime();
	reset();
	start();
	return elapsed;
}