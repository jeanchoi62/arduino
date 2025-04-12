const int sensorPin = A0;
const float baselineTemp = 20.0;

void setup() {
  // open a serial port
  Serial.begin(9600);
}

void loop() {
  // 
  int sensorVal = analogRead(sensorPin);
  //Serial.print("sensor val: ");
  //Serial.print(sensorVal);
  float voltage = (sensorVal/1024.0) * 5.0;
  float temperature = (voltage - .5) * 100;
  Serial.println(temperature);
  delay(500);
  if (temperature > 21) {
    pinMode(5, OUTPUT);
    digitalWrite(5, HIGH);
    delay(250);
  } else if (temperature < 20.4) {
    pinMode(5, OUTPUT);
    digitalWrite(5, LOW);
    delay(250);
  }
  

}
