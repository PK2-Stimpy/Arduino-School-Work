/*
  Pins variable.
*/
const int pins[] = {
  12, // GREEN 
  11, // YELLOW
  10  // RED
};
/*
  Time delay variables.
*/
int waitTimeV = 10000,
    waitTimeA = 500,
    waitTimeR = 8000;

/*
    This is the setup function where we
  have to set the pin modes.
*/
void setup() {
  for(int i = 0; i < sizeof(pins); i++)
    pinMode(pins[i], OUTPUT);
}

/*
    Pretty much the function that repeats
  indefinitely.
*/
void loop() {
  digitalWrite(pins[0], HIGH);
  delay(waitTimeV);
  digitalWrite(pins[0], LOW);
  delay(1000);
  for(int i = 0; i <= 5; i++) {
    digitalWrite(pins[1], HIGH);
    delay(waitTimeA);
    digitalWrite(pins[1], LOW);
    delay((i==5)?1000:waitTimeA);
  }
  digitalWrite(pins[2], HIGH);
  delay(waitTimeR);
  digitalWrite(pins[2], LOW);
  delay(1000);
}
