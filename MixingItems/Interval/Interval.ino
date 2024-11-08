#include "pitches.h"

int melody[] = {NOTE_C4, NOTE_G3, NOTE_A3, NOTE_G3, 0, NOTE_B3, NOTE_C4, 0};
int durations[] = {4, 8, 8, 4, 4, 4, 4, 2};

const int buzzer = 6;
const int led = 2;
const int button = 9;

long interval = 1000;
unsigned long prevT = 0;

int currNote = 0;

void setup() {
  Serial.begin(9600);
  pinMode(button, INPUT);
  pinMode(led, OUTPUT);
  pinMode(buzzer, OUTPUT);

}

void loop() {
  unsigned long currT = millis();
  if(currT - prevT >= interval)
  {
    prevT = currT;
    tone(buzzer, melody[currNote], 100);
    interval = 1000 / durations[currNote];
    currNote = (currNote + 1) % (sizeof(melody) / 2);
  }

  digitalWrite(led, digitalRead(button));

}
