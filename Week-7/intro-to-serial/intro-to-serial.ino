void setup() {
   // start serial port at 9600 bps:
   Serial.begin(9600);
}
 
void loop() {
   int analogValue = analogRead(A0);
   Serial.println(analogValue);
}