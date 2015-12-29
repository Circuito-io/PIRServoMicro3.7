#include "Global.h"

void setup() 
{
	Serial.begin(9600);
	servo.attach(SERVO_SIGNAL_PIN);
}

void loop() 
{	
	if(PIR.read())
	{
		Serial.println("PIR on");
		servo.write(120);
	}
	else
	{
		Serial.println("PIR off");
		servo.write(60);
	}
	
	delay(500);
}
