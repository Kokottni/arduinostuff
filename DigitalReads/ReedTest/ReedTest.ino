const int reedpin = 4;

void setup() {
  Serial.begin(9600);
  pinMode(reedpin, INPUT);

}

void loop() {
  int reedState = digitalRead(reedpin);
  //Serial.println(reedState);
  if(reedState == 1)
  {
    Serial.println("Wow you can push a button! Heres a fun pyramid:");
    for(int i = 0; i < 5; ++i)
    {
      int j = 0;
      while(j - 5 < i + 1)
      {
        Serial.print("*");
        ++j;
      }
      Serial.println();
    }
  }
  delay(10);

}
