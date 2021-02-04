const int pins[] = {2, 3, 4, 5, 6, 7, 8};

void setup() {
  for(int i = 0; i < sizeof(pins); i++)
    pinMode(pins[i], OUTPUT);
}

void loop() {
  for(int i = 0; i < sizeof(pins); i++) {
    digitalWrite(pins[i], HIGH);
    delay(400);
  }
  for(int i = 0; i < sizeof(pins); i++)
    digitalWrite(pins[i], LOW);
  delay(400);
}
