const int red = 10;
const int green = 2;
const int knob = A0;

void setup() {
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(knob, INPUT);
  Serial.begin(9600);

}

void loop() {
  Serial.println(analogRead(knob));
  if(analogRead(knob) > 500)
  {
    digitalWrite(green, HIGH);
    digitalWrite(red, LOW);
  }
  else
  {
    digitalWrite(green, LOW);
    digitalWrite(red, HIGH);
  }

}
