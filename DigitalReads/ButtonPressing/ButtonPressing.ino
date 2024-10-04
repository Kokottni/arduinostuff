const int buttonpin = 2;

void setup() {
  Serial.begin(9600);
  pinMode(buttonpin, INPUT);

}

void loop() {
  int buttonState = digitalRead(buttonpin);
  if(buttonState == 1)
  {
    Serial.println("Wow you can push a button! Heres a fun pyramid:");
    for(int i = 0; i < 5; ++i)
    {
      int j = i;
      while(j + 1 > 0)
      {
        Serial.print("*");
        --j;
      }
      Serial.println();
    }
  }
  delay(10);

}
