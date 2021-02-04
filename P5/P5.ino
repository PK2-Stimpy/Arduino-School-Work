const int pins[] = {2, 3, 4, 5, 6, 7, 8};
int waitTime = 50;

void setup() {
  for(int i = 0; i < sizeof(pins); i++)
    pinMode(pins[i], OUTPUT);
}

void loop() {
  for(int i = 0; i < sizeof(pins); i++) {
    digitalWrite(pins[i], HIGH);
    delay(waitTime);
    digitalWrite(pins[i], LOW);
  }
  delay(waitTime*2);
  for(int i = 0; i < sizeof(pins); i--) {
    digitalWrite(pins[i], HIGH);
    delay(waitTime);
    digitalWrite(pins[i], LOW);
  }
  delay(waitTime*2);
}
