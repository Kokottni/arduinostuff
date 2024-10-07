const int xPin = A3;
const int yPin = A4;
const int digital = 12;

void setup() {
  pinMode(digital, INPUT);
  digitalWrite(digital, HIGH);
  Serial.begin(9600);

}

void loop() {
  Serial.print("X: ");
  Serial.print(analogRead(xPin), DEC);
  Serial.print(" Y: ");
  Serial.print(analogRead(yPin), DEC);
  Serial.print(" Z: ");
  Serial.println(digitalRead(digital));
  delay(250);

}
