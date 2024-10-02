const int b1a = 1;
const int b1b = 2;
const int a1a = 3;
const int a1b = 4;
const int buzz = 9;

void setup() {
  //motor 1
  pinMode(b1a, OUTPUT);
  pinMode(b1b, OUTPUT);
  //motor 2
  pinMode(a1a, OUTPUT);
  pinMode(a1b, OUTPUT);
  pinMode(buzz, OUTPUT);
}

void loop() {
  
  //Goal is to make it beep when it backs up
  digitalWrite(b1a, HIGH);
  digitalWrite(b1b, LOW);
  digitalWrite(a1a, HIGH);
  digitalWrite(a1b, LOW);
  delay(2000);

  digitalWrite(b1a, LOW);
  digitalWrite(b1b, LOW);
  digitalWrite(a1a, LOW);
  digitalWrite(a1b, LOW);
  delay(500);

  digitalWrite(b1a, LOW);
  digitalWrite(b1b, HIGH);
  digitalWrite(a1a, LOW);
  digitalWrite(a1b, HIGH);
  digitalWrite(buzz, HIGH);
  delay(1000);

  digitalWrite(b1a, LOW);
  digitalWrite(b1b, LOW);
  digitalWrite(a1a, LOW);
  digitalWrite(a1b, LOW);
  digitalWrite(buzz, LOW);
  delay(500);

}
