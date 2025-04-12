#include <OneWire.h>
#include <DallasTemperature.h>

#define ONE_WIRE_BUS 8

OneWire oneWire(ONE_WIRE_BUS);
DallasTemperature sensors(&oneWire);

float celsius = 0;
float f = 0;

void setup() {
  sensors.begin();
  Serial.begin(9600);

  // put your setup code here, to run once:

}

void loop() {
  sensors.requestTemperatures();
  celsius = sensors.getTempCByIndex(0);
  f = sensors.toFahrenheit(celsius);
  Serial.println(f);
  //digitalRead(8) ?
  delay(2000);
  // put your main code here, to run repeatedly:

}

/*
const int sensorPin = A0;
void setup() {
  Serial.begin(9600); // open a serial port

}
void loop() {
  int sensorVal = analogRead(sensorPin);
  Serial.print("Sensor Value: ");
  Serial.print(sensorVal);
  // convert the ADC reading to voltage
  float voltage = (sensorVal/1024.0) * 5.0;
  Serial.print(" Volts: ");
  Serial.print(voltage);
  Serial.print(", degrees F: ");
  // convert the voltage to temperature in degrees
  float temperature = (voltage - .5) * 100;
  float f = (temperature * 9/5) + 32;
  Serial.println(f);
  delay(2000);


}
*/
