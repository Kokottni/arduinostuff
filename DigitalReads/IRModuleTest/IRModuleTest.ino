const int irPin = 7;

void setup() {
  Serial.begin(9600);
  pinMode(7, INPUT);
  
}

void loop() {
  if(digitalRead(irPin) == 0)
  {
    Serial.println("STOP BLOCKING ME AHAHAHHHHHHHHHHHHHHHHHHHHHHHHHHHH!!!!!!!!!!!!!!!!!!!!!");
  }
  else
  {
    Serial.println("Thanks g");
  }
  delay(50);

}
