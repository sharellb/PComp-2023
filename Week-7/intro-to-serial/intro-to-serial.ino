int sensorValue;
int prevSensor = 0;
 
void setup() {
   Serial.begin(9600);
   pinMode(2, INPUT);
}

void loop() {
    // read the incoming byte:
    // int inByte = Serial.read();
    // read the sensor:

    sensorValue = digitalRead(2);

    // print the results:
    if (sensorValue == HIGH) {
      Serial.write(1);
    } else if (sensorValue == LOW) {
      Serial.println(0);
    }
}