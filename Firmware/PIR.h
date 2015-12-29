#ifndef RGBLED_H
#define RGBLED_H

#include "arduino.h"

class PIRSensor
{
	public:
		PIRSensor(int signalPin);
		bool read();             
	private:
		int signalPin;
};
#endif //__RGBLED_H
