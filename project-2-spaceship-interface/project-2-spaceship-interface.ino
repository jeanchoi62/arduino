int switchState = 0;
void setup() {
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(2, INPUT);
}

void loop() {
  switchState = digitalRead(2);
  // LOW = off
  if (switchState == LOW) {
    // the button is not pressed
    digitalWrite(5, HIGH);
    digitalWrite(4, LOW);
    digitalWrite(3, LOW);

  }
  else {
    digitalWrite(5, LOW);
    digitalWrite(4, LOW);
    digitalWrite(3, LOW);
     // wait for a quarter second
    // toggle the LEDs
    
    digitalWrite(4, HIGH);
    delay(250);
    digitalWrite(4, LOW);
    digitalWrite(3, HIGH);
    delay(250);
  digitalWrite(3, LOW);
  }
} // go back to the beginning of the loop 