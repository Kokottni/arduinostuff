const int photoPin = A0;

void setup() {
  pinMode(photoPin, INPUT);
  Serial.begin(9600);

}

void loop() {
  int photoOut = analogRead(photoPin);
  if(photoOut < 50)
  {
    Serial.println("Its too bright man");
  }
  else
  {
    Serial.println("You good");
  }
  delay(100);

}
