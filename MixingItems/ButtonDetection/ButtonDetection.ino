const int button = 2;
const int A1A = 9;
const int A1B = 10;

void setup() {
  pinMode(button, INPUT);
  pinMode(A1A, OUTPUT);
  pinMode(A1B, OUTPUT);
  Serial.begin(9600);

}

int detection = 0;
int buttonState = 0;
int prevButton = 0;

void loop() {
  buttonState = digitalRead(button);
  if(buttonState != prevButton && buttonState == HIGH)
  {
    detection = (detection + 1) % 2;
    Serial.print("Detection state is: ");
    Serial.println(detection);
    delay(50);
  }
  prevButton = buttonState;

  if(detection == 1)
  {
    digitalWrite(A1A, HIGH);
    digitalWrite(A1B, LOW);
  }
  else
  {
    digitalWrite(A1A, LOW);
    digitalWrite(A1B, LOW);
  }
}
