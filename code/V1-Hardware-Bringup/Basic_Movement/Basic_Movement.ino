/*
  ==========================================================
  Jarvis Rover - Version 1
  Basic Movement Test

  Purpose:
  Verify that both motors move the robot forward together.

  Hardware:
  - Arduino Nano
  - TB6612FNG Motor Driver
  ==========================================================
*/

// Left Motor (A)
#define AIN1 4
#define AIN2 3
#define PWMA 5

// Right Motor (B)
#define BIN1 7
#define BIN2 6
#define PWMB 9

// Standby
#define STBY 8

void setup() {

  pinMode(AIN1, OUTPUT);
  pinMode(AIN2, OUTPUT);
  pinMode(PWMA, OUTPUT);

  pinMode(BIN1, OUTPUT);
  pinMode(BIN2, OUTPUT);
  pinMode(PWMB, OUTPUT);

  pinMode(STBY, OUTPUT);

  digitalWrite(STBY, HIGH);

  // Move Forward
  digitalWrite(AIN1, HIGH);
  digitalWrite(AIN2, LOW);

  digitalWrite(BIN1, HIGH);
  digitalWrite(BIN2, LOW);

  analogWrite(PWMA, 180);
  analogWrite(PWMB, 180);
}

void loop() {

  // Keep moving forward

}
