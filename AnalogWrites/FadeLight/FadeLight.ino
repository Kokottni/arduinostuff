const int ledToFade = 9;

void setup() {
  //While not needed, may be useful to remind self about the pin.
  pinMode(ledToFade, OUTPUT);

}

void loop() {
 for(int i = 0; i < 256; ++i)
 {
    analogWrite(ledToFade, i);
    delay(20);
 }
}
