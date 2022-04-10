// C++ code
//
#include<Servo.h>
int position=0;
int i=0;
int j=0;

Servo servo_9;

void setup()
{
  servo_9.attach(9);
}

void loop()
{
  position=0;
  for(position=1;position<=179;position++)
  {
    servo_9.write(position);
    delay(20);
  }
  for(position=179;position>=1;position--)
  {
    servo_9.write(position);
    delay(20);
  }
  
}
