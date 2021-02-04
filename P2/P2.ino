const int pin_led1 = 13;
const int pin_led2 = 10;
int waitTime = 600;

void setup() {
  pinMode(pin_led1, OUTPUT);
  pinMode(pin_led2, OUTPUT);
}

void loop() {
  delay(waitTime);
  digitalWrite(pin_led1, HIGH);
  digitalWrite(pin_led2, LOW);
  delay(waitTime);
  digitalWrite(pin_led1, LOW);
  digitalWrite(pin_led2, HIGH);
}
