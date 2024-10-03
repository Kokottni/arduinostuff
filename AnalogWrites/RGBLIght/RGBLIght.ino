const int blue = 9;
const int green = 10;
const int red = 11;

void setup() {
  pinMode(blue, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(red, OUTPUT);

}

void loop() {
  colorTest();
  rainbow();
}

void colorTest()
{
  color(255, 0, 0);
  delay(500);
  color(0, 255, 0);
  delay(500);
  color(0, 0, 255);
  delay(500);
}

void rainbow()
{
  color(255, 0, 252);
  delay(250);
  color(237, 109, 0);
  delay(250);
  color(255, 215, 0);
  delay(250);
  color(34, 139, 34);
  delay(250);
  color(0, 112, 255);
  delay(250);
  color(0, 46, 90);
  delay(250);
  color(128, 0, 128);
  delay(500);
}

void color(unsigned char r, unsigned char g, unsigned char b)
{
  analogWrite(red, r);
  analogWrite(green, g);
  analogWrite(blue, b);
}
