int notes[] = {262, 294, 330, 349};

void setup() {
  Serial.begin(9600);

}

void loop() {
  int keyVal = analogRead(A0);
  Serial.println(keyVal);

  if(keyVal >= 5 && keyVal <= 11) {
    tone(8, notes[0]);
  }

  else if(keyVal >= 150 && keyVal <= 200) {
    tone(8, notes[1]);
  }
  else if(keyVal >= 505 && keyVal <= 515) {
    tone(8, notes[2]);
  }
  else if(keyVal >= 400 && keyVal <= 500) {
    tone(8, notes[3]);
  }
  else{
    noTone(8);
  }
}
