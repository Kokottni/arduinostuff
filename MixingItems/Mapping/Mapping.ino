#include <Servo.h>

Servo servo;

const int sPin = 9;
const int potent = A0;

void setup() {
  pinMode(potent, A0);
  servo.attach(sPin);

}

void loop() {
  int rotate = analogRead(potent);
  int angle = map(rotate, 0, 1023, 0, 180);
  servo.write(angle);
  delay(15);

}
