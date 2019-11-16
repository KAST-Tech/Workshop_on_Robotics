int ledPin = 8; // Define the led

void setup(){
  pinMode(ledPin,OUTPUT); // Setup the pinmode
}

void loop(){
  digitalWrite(ledPin,HIGH); // Light ON
  delay(2000);
  digitalWrite(ledPin,LOW); // Light OFF
  delay(2000);
}
