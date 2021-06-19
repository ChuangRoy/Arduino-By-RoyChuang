void setup() {         // put your setup code here, to run once:
  pinMode(13, OUTPUT); // sets the digital pin as output
}

void loop() {             // put your main code here, to run repeatedly:
  digitalWrite(13, HIGH); // sets the digital pin on/off
  delay(1000);            // waits a few milliseconds
  digitalWrite(13, LOW);  // sets the digital pin on/off
  delay(1000);            // waits a few milliseconds
}
