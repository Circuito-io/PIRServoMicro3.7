#include "PIR.h"

PIRSensor::PIRSensor(int PIRPin)
{
	signalPin = PIRPin;
	
    pinMode(signalPin, INPUT);
}
bool PIRSensor::read()
{
	return digitalRead(signalPin);
}



