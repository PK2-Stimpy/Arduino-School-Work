const int pins[] = {2, 3, 4, 5, 6, 7, 8};
void setValue(int g, int f, int e, int d, int c, int b, int a) {
  int arr[] = {a, b, c, d, e, f, g};
  for(int i = 0; i < sizeof(arr); i++)
    digitalWrite(pins[i], arr[i]);
}

void setup() {
  for(int i = 0; i < sizeof(pins); i++)
    pinMode(pins[0], OUTPUT);
}

void loop() {
  setValue(1, 1, 0, 1, 1, 1, 1); // 9
  delay(500);
  setValue(1, 1, 1, 1, 1, 1, 1); // 8
  delay(500);
  setValue(0, 0, 0, 0, 1, 1, 1); // 7
  delay(500);
  setValue(1, 1, 1, 1, 1, 0, 1); // 6
  delay(500);
  setValue(1, 1, 0, 1, 1, 0, 1); // 5
  delay(500);
  setValue(1, 1, 0, 0, 1, 1, 0); // 4
  delay(500);
  setValue(1, 0, 0, 1, 1, 1, 1); // 3
  delay(500);
  setValue(1, 0, 1, 1, 0, 1, 1); // 2
  delay(500);
  setValue(0, 0, 0, 0, 1, 1, 0); // 1
  delay(500);
  setValue(0, 1, 1, 1, 1, 1, 1); // 0
  delay(500);
}
