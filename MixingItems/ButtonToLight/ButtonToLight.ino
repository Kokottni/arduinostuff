const int button = 2;
const int light = 8;

void setup() {
  pinMode(button, INPUT);
  pinMode(light, OUTPUT);

}

void loop() {
  //If not pressing button leave light on, otherwise turn off
  if(digitalRead(button) == LOW)
  {
    digitalWrite(light, HIGH);
  }
  else
  {
    digitalWrite(light, LOW);
  }

}
