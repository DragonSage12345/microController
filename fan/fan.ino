void setup() {
  // put your setup code here, to run once:
pinMode(3, OUTPUT);
}

void loop() {
  analogWrite(3, 255); // sets the digital pin 13 on
  delay(1000);            // waits for a second
  analogWrite(3, 100);  // sets the digital pin 13 off
  delay(1000);            // waits for a second

}
