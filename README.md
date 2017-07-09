# ArduinoClock
### Simple arduino library for measuring elapsed time.

This library offers four different classes:
* `ArduinoClock`
* `HighResolutionClock`
* `Stopwatch`
* `TimeSpan`

* `ArduinoClock` is the standard clock. It measures time in milliseconds and will overflow in approximately 50 days. All clocks in this library inherit from the abstract base class `ClockBase`. On instantiation, the clock starts running and you can read the elapsed time with `getElapsedTime()`, which returns a `TimeSpan`. The clock can be restarted with `restart()`.
* `HighResolutionClock` is basically the same as `ArduinoClock` but the time is measured in microseconds and it will already overflow after approximately 70 minutes.
* `TimeSpan` is the class returned by functions that give back elapsed time. It is constructed with an `unsigned long` representing the elapsed microseconds. You can then convert the retrieved time to microseconds, milliseconds, seconds, minutes or hours.
* `Stopwatch` is a clock that you can start and pause. You have to pass a clock to the constructor to set the precision. **Do not call the functions of the underlying clock! Only use the member functions of the `Stopwatch`!**

## Installation
Just download this repository as .zip file, open it and rename the folder from `ArduinoClock-master` to `ArduinoClock` and place in the libraries directory (On Windows: "Documents\Arduino\libraries", On Linux: "User Folder/Sketchbook").

## Contribute
If you find any bugs or want to request a feature, just create a new issue or contact me under my E-Mail.

## License
MIT License

Copyright (c) 2017 Loris Leitner

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
