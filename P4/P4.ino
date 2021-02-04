#define WAIT_TIME = 400

const int red[] = {12, 6};
const int yellow[] = {10, 4};
const int green[] = {8, 2};

void setup() {
  for(int i = 0; i < sizeof(red); i++)
    pinMode(red[i], OUTPUT);
  for(int i = 0; i < sizeof(yellow); i++)
    pinMode(yellow[i], OUTPUT);
  for(int i = 0; i < sizeof(green); i++)
    pinMode(green[i], OUTPUT);
}

void loop() {
  for(int i = 0; i < sizeof(red); i++)
    digitalWrite(red[i], HIGH);
    
  delay(WAIT_TIME);
  
  for(int i = 0; i < sizeof(red); i++)
    digitalWrite(red[i], LOW);
  for(int i = 0; i < sizeof(yellow); i++)
    digitalWrite(yellow[i], HIGH);
    
  delay(WAIT_TIME);
  
  for(int i = 0; i < sizeof(yellow); i++)
    digitalWrite(yellow[i], LOW);
  for(int i = 0; i < sizeof(green); i++)
    digitalWrite(green[i], HIGH);
    
  delay(WAIT_TIME);
  
  for(int i = 0; i < sizeof(green); i++)
    digitalWrite(green[i], LOW);
}
