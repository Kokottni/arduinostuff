void setup() {
  Serial.begin(9600);
  Serial.print("Hello this is my first serial test!");
  Serial.print("\n Here is an ASCII table mapping");
  int i;
  //Quick little ascii table
  for(i = 33; i < 126; ++i)
  {
    Serial.write(i);
    Serial.print(", decimal ,");
    Serial.print(i);
    Serial.print(", hexadecimal ,");
    Serial.print(i, HEX);
    Serial.print(", octal ,");
    Serial.print(i, OCT);
    Serial.print(", binary ,");
    Serial.print(i, BIN);
    Serial.println();

  }

}

void loop() {
  if(Serial.available() > 0)
  {
    Serial.println(Serial.readString());
  }

}
