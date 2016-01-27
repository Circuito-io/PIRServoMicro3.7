#include "Global.h"

#define ServoFirstPosition	100
#define ServoSecondPosition	50

void setup() 
{
	servo.attach(SERVO_SIGNAL_PIN);
	servo.write(ServoFirstPosition);
}

void loop() 
{	
	if(pir.read())
	{   
		servo.write(ServoSecondPosition);
		delay(500);
		servo.write(ServoFirstPosition);
		delay(4000); //4 second is the minimum time required for stabilize spakrFun PIR signal after servo movement
	}
 
	delay(100);
}
