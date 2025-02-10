#include <Servo.h>

#define pinServo3 3
#define pinServo10 10
int shaftPos = 0;

Servo moment;
Servo number;

void setup()
{
  moment.attach(pinServo3);
  number.attach(pinServo10);
}

void loop() {
  
  for (shaftPos = 0; shaftPos <= 180; shaftPos ++) { 
  
    moment.write(shaftPos);
    number.write(shaftPos);           
    delay(15); 
  }

  for (shaftPos = 180; shaftPos >= 0; shaftPos --) { 
  
    moment.write(shaftPos);
    number.write(shaftPos);           
    delay(15); 
  }
}

