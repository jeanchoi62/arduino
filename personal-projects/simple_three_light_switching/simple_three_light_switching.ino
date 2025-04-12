int switchState = 0;

void setup() {
  Serial.begin(9600);
  pinMode(2, INPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop() {
  switchState = digitalRead(2);

  // put your main code here, to run repeatedly:
// if button is pressed, there is open voltage
// if switchState != 0 ? 
// turn on all the lights

  if (switchState == LOW) {
    digitalWrite(5, HIGH);
    digitalWrite(4, LOW);
    digitalWrite(3, LOW);
    delay(2000);
    digitalWrite(3, LOW);
    digitalWrite(5, LOW);
    digitalWrite(4, HIGH);
    delay(2000);
    digitalWrite (5, LOW);
    digitalWrite(4, LOW);
    digitalWrite(3, HIGH);
    delay(2000);
    Serial.println("Button is NOT pressed " + switchState);
  } else {
    Serial.println("Button pressed! : " + switchState);
    Serial.println(switchState);
    digitalWrite(5, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(3, HIGH);

  }
}
