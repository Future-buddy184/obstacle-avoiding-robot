/*
  ==========================================================
  Jarvis Rover - Version 1
  Motor Test

  Purpose:
  Verify that both TT gear motors and the TB6612FNG motor
  driver operate correctly before integrating the full robot.

  Hardware:
  - Arduino Nano
  - TB6612FNG Motor Driver
  - 2 × TT Gear Motors
  ==========================================================
*/

// ---------------- Motor A (Left) ----------------
#define AIN1 4
#define AIN2 3
#define PWMA 5

// ---------------- Motor B (Right) ----------------
#define BIN1 7
#define BIN2 6
#define PWMB 9

// ---------------- Standby ----------------
#define STBY 8

void setup() {

  pinMode(AIN1, OUTPUT);
  pinMode(AIN2, OUTPUT);
  pinMode(PWMA, OUTPUT);

  pinMode(BIN1, OUTPUT);
  pinMode(BIN2, OUTPUT);
  pinMode(PWMB, OUTPUT);

  pinMode(STBY, OUTPUT);

  // Enable the motor driver
  digitalWrite(STBY, HIGH);
}

void loop() {

  // ===========================
  // Move Forward
  // ===========================
  digitalWrite(AIN1, HIGH);
  digitalWrite(AIN2, LOW);

  digitalWrite(BIN1, HIGH);
  digitalWrite(BIN2, LOW);

  analogWrite(PWMA, 180);
  analogWrite(PWMB, 180);

  delay(2000);

  stopMotors();
  delay(1000);

  // ===========================
  // Move Backward
  // ===========================
  digitalWrite(AIN1, LOW);
  digitalWrite(AIN2, HIGH);

  digitalWrite(BIN1, LOW);
  digitalWrite(BIN2, HIGH);

  analogWrite(PWMA, 180);
  analogWrite(PWMB, 180);

  delay(2000);

  stopMotors();
  delay(2000);
}

// ------------------------------
// Stop both motors
// ------------------------------
void stopMotors() {

  analogWrite(PWMA, 0);
  analogWrite(PWMB, 0);

}
