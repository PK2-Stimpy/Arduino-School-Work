const int pin = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int entryValue = analogRead(pin);
  Serial.println(entryValue);
  delay(1000);
}
