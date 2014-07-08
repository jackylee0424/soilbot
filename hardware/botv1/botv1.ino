/*
  Analog input, analog output, serial output
 
 Reads an analog input pin, maps the result to a range from 0 to 255
 and uses the result to set the pulsewidth modulation (PWM) of an output pin.
 Also prints the results to the serial monitor.
 
 The circuit:
 * potentiometer connected to analog pin 0.
   Center pin of the potentiometer goes to the analog pin.
   side pins of the potentiometer go to +5V and ground
 * LED connected from digital pin 9 to ground
 
 created 29 Dec. 2008
 modified 9 Apr 2012
 by Tom Igoe
 
 This example code is in the public domain.
 
 */

int sensorValue0 = 0; 
int sensorValue1 = 0; 
int sensorValue2 = 0; 
int sensorValue3 = 0; 
int sensorValue4 = 0; 
int sensorValue5 = 0;

void setup() {
  // initialize serial communications at 9600 bps:
  Serial.begin(9600); 
}

void loop() {
  // read the analog in value:
  sensorValue0 = analogRead(A0);
  sensorValue1 = analogRead(A1);
  sensorValue2 = analogRead(A2);
  sensorValue3 = analogRead(A3);
  sensorValue4 = analogRead(A4);
  sensorValue5 = analogRead(A5);
               
  Serial.print(sensorValue0);Serial.print(',');
  Serial.print(sensorValue1);Serial.print(',');
  Serial.print(sensorValue2);Serial.print(',');
  Serial.print(sensorValue3);Serial.print(',');
  Serial.print(sensorValue4);Serial.print(',');
  Serial.println(sensorValue5);
  delay(1100);                     
}
