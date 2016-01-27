#ifndef PIR_H
#define PIR_H

#include "arduino.h"

class PIR
{
	public:
		PIR(int PIRPin);
		bool read();             
	private:
		const int signalPin;
};
#endif //PIR_H
