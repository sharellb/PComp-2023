const int switchPin = 2;      // digital input
int sensorValue;
 
void setup() {
   Serial.begin(9600);
}

void loop() {
    // read the incoming byte:
    int inByte = Serial.read();
    // read the sensor:
    sensorValue = analogRead(A0);
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