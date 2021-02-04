const int leds[] = {5, 6, 7, 8};
int waitTime = 200;

void setup() {
  for(int i = 0; i < sizeof(leds); i++)
    pinMode(leds[i], OUTPUT);
}

void loop() {
  for(int i = 0; i < sizeof(leds); i++) {
    digitalWrite(leds[i], HIGH);
    delay(waitTime);
    digitalWrite(leds[i], LOW);
    delay(waitTime);
  }
}
