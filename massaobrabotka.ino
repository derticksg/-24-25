#include <Servo.h>
#define pin10 10
#define pin3 3
Servo gate1, gate2;
void setup(){
  gate1.attach(pin10);
  gate2.attach(pin3);
}

void loop(){
  gate1.write(0);
  gate2.write(0);
  delay(1000);
  gate1.write(90);
  gate2.write(90);
  delay(1000);
  gate1.detach();
  gate2.detach();
  }

