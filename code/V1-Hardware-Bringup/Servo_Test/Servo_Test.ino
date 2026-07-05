/*
  ==========================================================
  Jarvis Rover - Version 1
  Servo Test

  Purpose:
  Verify SG90 servo operation before integrating
  the ultrasonic sensor.

  Servo Signal Pin: D12
  ==========================================================
*/

#include <Servo.h>

Servo scanner;

const int SERVO_PIN = 12;

void setup() {

  scanner.attach(SERVO_PIN);

}

void loop() {

  // Look Left
  scanner.write(0);
  delay(1000);

  // Center
  scanner.write(90);
  delay(1000);

  // Look Right
  scanner.write(180);
  delay(1000);

  // Center
  scanner.write(90);
  delay(1000);

}
