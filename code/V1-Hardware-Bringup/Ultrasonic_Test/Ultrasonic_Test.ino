/*
  ==========================================================
  Jarvis Rover - Version 1
  Ultrasonic Sensor Test

  Purpose:
  Verify HC-SR04 operation and display measured distance
  in the Serial Monitor.

  Connections:
  TRIG -> D10
  ECHO -> D11
  ==========================================================
*/

const int trigPin = 10;
const int echoPin = 11;

long duration;
float distance;

void setup() {

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  Serial.begin(9600);

}

void loop() {

  // Send trigger pulse
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);

  digitalWrite(trigPin, LOW);

  // Read echo pulse
  duration = pulseIn(echoPin, HIGH);

  // Calculate distance (cm)
  distance = duration * 0.0343 / 2;

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  delay(250);

}
