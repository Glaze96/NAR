#pragma once
/* Author: Rasmus R.
* Last modified: Rasmus R.
*
* Usage:
*
*
*/

#include <Windows.h>


class Timer {
private:
	LARGE_INTEGER _start;
	double _frequency;

public:
	Timer() {
		LARGE_INTEGER frequencey;
		QueryPerformanceFrequency(&frequencey);
		_frequency = 1.0 / frequencey.QuadPart;
		QueryPerformanceCounter(&_start);
	}

	void Reset() {
		QueryPerformanceCounter(&_start);
	}

	float Elapsed() {
		LARGE_INTEGER current;
		QueryPerformanceCounter(&current);
		unsigned _int64 cycles = current.QuadPart - _start.QuadPart;
		return (float)(cycles * _frequency);
	}

};