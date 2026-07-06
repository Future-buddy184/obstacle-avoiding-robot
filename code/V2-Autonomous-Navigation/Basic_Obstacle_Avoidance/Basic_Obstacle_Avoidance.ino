/*
  ==========================================================
  Jarvis Rover - Version 2
  Basic Obstacle Avoidance

  Purpose:
  The first complete autonomous obstacle-avoiding program.

  Hardware:
  - Arduino Nano
  - TB6612FNG Motor Driver
  - HC-SR04 Ultrasonic Sensor
  - SG90 Servo Motor

  This version prioritizes functionality over smoothness.
  ==========================================================
*/

#include <Servo.h>

Servo scanner;

// ---------------- Motor Driver ----------------
#define AIN1 4
#define AIN2 3
#define PWMA 5

#define BIN1 7
#define BIN2 6
#define PWMB 9

#define STBY 8

// ---------------- Ultrasonic ----------------
#define TRIG 10
#define ECHO 11

// ---------------- Servo ----------------
#define SERVO_PIN 12

const int motorSpeed = 180;
const int safeDistance = 20;

void setup() {

  pinMode(AIN1, OUTPUT);
  pinMode(AIN2, OUTPUT);
  pinMode(PWMA, OUTPUT);

  pinMode(BIN1, OUTPUT);
  pinMode(BIN2, OUTPUT);
  pinMode(PWMB, OUTPUT);

  pinMode(STBY, OUTPUT);

  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);

  digitalWrite(STBY, HIGH);

  scanner.attach(SERVO_PIN);
  scanner.write(90);

  delay(1000);
}

void loop() {

  int front = measureDistance();

  if (front > safeDistance) {

    moveForward();

  } else {

    stopRobot();
    delay(300);

    // Scan Left
    scanner.write(0);
    delay(500);
    int left = measureDistance();

    // Scan Right
    scanner.write(180);
    delay(500);
    int right = measureDistance();

    // Return Center
    scanner.write(90);
    delay(300);

    if (left > right) {

      turnLeft();

    } else {

      turnRight();

    }

  }

}

// ===================================================

int measureDistance() {

  digitalWrite(TRIG, LOW);
  delayMicroseconds(2);

  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);

  digitalWrite(TRIG, LOW);

  long duration = pulseIn(ECHO, HIGH);

  return duration * 0.034 / 2;

}

// ===================================================

void moveForward() {

  digitalWrite(AIN1, HIGH);
  digitalWrite(AIN2, LOW);

  digitalWrite(BIN1, HIGH);
  digitalWrite(BIN2, LOW);

  analogWrite(PWMA, motorSpeed);
  analogWrite(PWMB, motorSpeed);

}

// ===================================================

void stopRobot() {

  analogWrite(PWMA, 0);
  analogWrite(PWMB, 0);

}

// ===================================================

void turnLeft() {

  digitalWrite(AIN1, LOW);
  digitalWrite(AIN2, HIGH);

  digitalWrite(BIN1, HIGH);
  digitalWrite(BIN2, LOW);

  analogWrite(PWMA, motorSpeed);
  analogWrite(PWMB, motorSpeed);

  delay(450);

  stopRobot();

}

// ===================================================

void turnRight() {

  digitalWrite(AIN1, HIGH);
  digitalWrite(AIN2, LOW);

  digitalWrite(BIN1, LOW);
  digitalWrite(BIN2, HIGH);

  analogWrite(PWMA, motorSpeed);
  analogWrite(PWMB, motorSpeed);

  delay(450);

  stopRobot();

}
