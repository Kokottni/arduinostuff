const float refResistor = 10000;
const float beta = 3950;
const float nominalTemp = 25;
const float nominalResistance = 10000;

const int thermopin = A2;

void setup() {
  pinMode(thermopin, INPUT);
  Serial.begin(9600);

}

void loop() {
  float val = analogRead(thermopin);

  float voltage = (val / 1023) * 5.0;
  float rt = refResistor * (5.0 - voltage) / voltage;

  float kelvin = 1 / (((log(rt / nominalResistance)) / beta) + (1 / (nominalTemp + 273.15)));
  Serial.print("Kelvin: ");
  Serial.println(kelvin);
  float celsius = kelvin - 273.15;
  Serial.print("Celsius: ");
  Serial.println(celsius);
  float fahrenheit = celsius * 1.8 + 32;
  Serial.print("Fahrenheit: ");
  Serial.println(fahrenheit);
  delay(500); 

}
