// reference: https://itp.nyu.edu/physcomp/labs/labs-serial-communication/lab-two-way-duplex-webserial-communication/

const int buttonPin = 2;      // digital input
 
void setup() {
  // configure the serial connection:
  Serial.begin(9600);
  // configure the digital input:
  pinMode(buttonPin, INPUT);
}
 
void loop() {
  // read the first analog sensor:
  int sensorValue = analogRead(A0);
  // print the results:
  Serial.print(sensorValue);
  Serial.print(",");
 
  // read the second analog sensor:
  sensorValue = analogRead(A1);
  // print the results:
  Serial.print(sensorValue);
  Serial.print(",");
 
  // read the button:
  sensorValue = digitalRead(buttonPin);
  // print the results:
  Serial.println(sensorValue);
}