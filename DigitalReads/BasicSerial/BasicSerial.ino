void setup() {
  Serial.begin(9600);

}

void loop() {
  for(int i = 0; i < 100; ++i)
  {
    Serial.println(i + 1);
  }
  Serial.println("You've learned to count!");
  delay(1000);

}
