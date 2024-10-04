const int analog = A0;
int val = 0;

void setup() {
  Serial.begin(9600);

}

void loop() {
  val = analogRead(analog);
  Serial.println(val);
}
