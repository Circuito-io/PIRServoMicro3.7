#include "PIR.h"

PIRSensor::PIRSensor(int signalPin)
{
	signalPin = signalPin;
	
    pinMode(signalPin, INPUT);
}
bool PIRSensor::read()
{
	return digitalRead(signalPin);
}



