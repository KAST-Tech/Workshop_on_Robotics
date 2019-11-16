// Defines pin numbers
 int trigerPin = 9;
 int echoPin = 8;
 int ledPin = 7;

// Defines variables
long duration;
int distance;

void setup() {
pinMode(trigerPin, OUTPUT); // Sets the trigPin as an Output
pinMode(echoPin, INPUT);    // Sets the echoPin as an Input
pinMode(ledPin, OUTPUT);
Serial.begin(9600);         // Starts the serial communication
}

void loop() {
// Clears the trigPin
digitalWrite(trigerPin, LOW);
delayMicroseconds(2);

// Sets the trigPin on HIGH state for 10 micro seconds
digitalWrite(trigerPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigerPin, LOW);

// Reads the echoPin, returns the sound wave travel time in microseconds
duration = pulseIn(echoPin, HIGH);

// Calculating the distance
distance= duration*0.034/2;

if (distance <= 5){
  digitalWrite(ledPin, HIGH);
}
else{
  digitalWrite(ledPin, LOW);
}

// Prints the distance on the Serial Monitor
Serial.print("Distance: ");
Serial.println(distance);
}
