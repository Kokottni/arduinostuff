#include <Servo.h>

Servo myservo;

const int servo = 9;

void setup() {
  myservo.attach(9);
  myservo.write(0);
  delay(1000);
}

void loop() {
  for(int i = 0; i < 181; ++i)
  {
    myservo.write(i);
    delay(15);
  }

  for(int i = 180; i > -1; --i)
  {
    myservo.write(i);
    delay(15);
  }
}
