//initialize pin 2 of Arduino board
const int powerPin = 2;
void setup() {
  pinMode(powerPin, OUTPUT);
}
void loop() {
  // turn remote ON for 1 second
  digitalWrite(powerPin, HIGH);
  delay(1000);
  // turn remote OFF for 1 second
  digitalWrite(powerPin, LOW);
  delay(5000);
}
