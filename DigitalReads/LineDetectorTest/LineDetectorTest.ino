const int linePin = 7;

void setup() {
  Serial.begin(9600);
  pinMode(linePin, INPUT);
  
}

void loop() {
  if(digitalRead(linePin) == 0)
  {
    Serial.println("STOP BLOCKING ME AHAHAHHHHHHHHHHHHHHHHHHHHHHHHHHHH!!!!!!!!!!!!!!!!!!!!!");
  }
  else
  {
    Serial.println("Thanks g");
  }
  delay(50);

}