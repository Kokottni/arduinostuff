#define BUZZER 9

enum times //not necessary anymore
{
  hundred = 100,
  halfsec = 500,
  fullsec = 1000
};

void setup() {
  pinMode(BUZZER, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // digitalWrite(BUZZER, HIGH);
  // delay(500);
  // digitalWrite(BUZZER, LOW);
  // delay(500);
  String time;
  if(Serial.available() > 0)
  {
    time = Serial.readString();
    Serial.print(time);
      if(time == "hundred")
    {
      digitalWrite(BUZZER, HIGH);
      delay(100);
      digitalWrite(BUZZER, LOW);
    }
    if(time == "halfsec")
    {
      digitalWrite(BUZZER, HIGH);
      delay(500);
      digitalWrite(BUZZER, LOW);
    }
    if(time == "fullsec")
    {
      digitalWrite(BUZZER, HIGH);
      delay(1000);
      digitalWrite(BUZZER, LOW);
    }
  }
}
