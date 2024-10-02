void setup() {
    //on board light
    pinMode(13,OUTPUT);
    //breadboard wired light
    pinMode(9, OUTPUT);
}

void loop() {
    //Half second on half second off
    digitalWrite(13,HIGH);
    digitalWrite(9, HIGH);
    delay(500);
    digitalWrite(13,LOW);
    digitalWrite(9, LOW);
    delay(500);
}