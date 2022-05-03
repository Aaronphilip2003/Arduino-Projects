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
  for(position=1;position<=178;position++) // forward rotation
  {
    servo_9.write(position);
    delay(20);
  }
  for(position=179;position>=1;position--)// backward rotation
  {
    servo_9.write(position);
    delay(20);
  }
  
}
