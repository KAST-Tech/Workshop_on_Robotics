int ledPin = 2;

void setup(){
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}
 
void loop() {
  if(Serial.available()>0){
    char data= Serial.read(); // reading the data received from the bluetooth module
    switch(data){
      case 'O': digitalWrite(ledPin, HIGH);
      break; 
      case 'o': digitalWrite(ledPin, LOW);
      break;
      default : break;
    }
      Serial.println(data);
  }
  delay(50);
}
