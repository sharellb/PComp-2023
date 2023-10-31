const int switchPin = 2;      // digital input
 
void setup() {
   // configure the serial connection:
   Serial.begin(9600);
   // configure the digital input:
   pinMode(switchPin, INPUT);
}

void loop() {
   // read the sensor:
   int sensorValue = analogRead(A0);
   // print the results:
   Serial.print(sensorValue);
   Serial.print(",");
 
   // read the sensor:
   sensorValue = analogRead(A1);
   // print the results:
   Serial.print(sensorValue);
   Serial.print(",");
 
   // read the sensor:
   sensorValue = digitalRead(switchPin);
   // print the results:
   Serial.println(sensorValue);
}