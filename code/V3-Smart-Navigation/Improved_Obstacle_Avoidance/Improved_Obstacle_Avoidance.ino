/*
==========================================================
Jarvis Rover
Version 3 - Smart Navigation

File:
Improved_Obstacle_Avoidance.ino

Description:
Final stable Version 3 obstacle-avoidance software.

Features
--------
- Smooth servo scanning
- Averaged ultrasonic measurements
- Smart left/right path selection
- Controlled turning
- Reverse before turning
- Stable autonomous navigation

Hardware
--------
- Arduino Nano
- TB6612FNG Motor Driver
- HC-SR04 Ultrasonic Sensor
- SG90 Servo Motor
- 2 × TT Gear Motors
- 2×18650 Li-ion Battery Pack

This sketch represents the final stable Version 3
implementation before the transition to the modular
Version 4 architecture.
==========================================================
*/

#include <Servo.h>

//====================================================
// PIN DEFINITIONS
//====================================================

// Left Motor (A)
#define AIN1 4
#define AIN2 3
#define PWMA 5

// Right Motor (B)
#define BIN1 7
#define BIN2 6
#define PWMB 11

#define STBY 8

// Ultrasonic
#define TRIG 10
#define ECHO 9

// Servo
#define SERVO_PIN 2

Servo scanner;

//====================================================
// ROBOT SETTINGS
//====================================================

const int MOTOR_SPEED = 100;       // Forward speed
const int TURN_SPEED  = 90;        // Slightly slower while turning

const int STOP_DISTANCE = 25;      // Stop if object is nearer than this
const int SAFE_DISTANCE = 35;      // Distance considered safe

// Servo positions
const int CENTER = 90;
const int LEFT   = 150;
const int RIGHT  = 30;

//====================================================
// MOTOR FUNCTIONS
//====================================================

void moveForward()
{
digitalWrite(AIN1, HIGH);
digitalWrite(AIN2, LOW);

digitalWrite(BIN1, HIGH);
digitalWrite(BIN2, LOW);

analogWrite(PWMA, MOTOR_SPEED);
analogWrite(PWMB, MOTOR_SPEED);
}

void moveBackward()
{
digitalWrite(AIN1, LOW);
digitalWrite(AIN2, HIGH);

digitalWrite(BIN1, LOW);
digitalWrite(BIN2, HIGH);

analogWrite(PWMA, MOTOR_SPEED);
analogWrite(PWMB, MOTOR_SPEED);
}

void stopRobot()
{
analogWrite(PWMA, 0);
analogWrite(PWMB, 0);
}

void turnLeft()
{
digitalWrite(AIN1, LOW);
digitalWrite(AIN2, HIGH);

digitalWrite(BIN1, HIGH);
digitalWrite(BIN2, LOW);

analogWrite(PWMA, TURN_SPEED);
analogWrite(PWMB, TURN_SPEED);
}

void turnRight()
{
digitalWrite(AIN1, HIGH);
digitalWrite(AIN2, LOW);

digitalWrite(BIN1, LOW);
digitalWrite(BIN2, HIGH);

analogWrite(PWMA, TURN_SPEED);
analogWrite(PWMB, TURN_SPEED);
}//====================================================
// ULTRASONIC FUNCTIONS
//====================================================

// Take multiple readings and average them
int getDistance()
{
int sum = 0;

for (int i = 0; i < 5; i++)
{
digitalWrite(TRIG, LOW);
delayMicroseconds(2);

digitalWrite(TRIG, HIGH);  
delayMicroseconds(10);  

digitalWrite(TRIG, LOW);  

long duration = pulseIn(ECHO, HIGH, 30000);  

if (duration == 0)  
  sum += 300;     // No echo detected  
else  
  sum += duration * 0.0343 / 2;  

delay(10);

}

return sum / 5;
}

//====================================================
// SMOOTH SERVO MOVEMENT
//====================================================

void moveServoSmooth(int targetAngle)
{
static int currentAngle = CENTER;

if (currentAngle < targetAngle)
{
for (int i = currentAngle; i <= targetAngle; i += 2)
{
scanner.write(i);
delay(12);
}
}
else
{
for (int i = currentAngle; i >= targetAngle; i -= 2)
{
scanner.write(i);
delay(12);
}
}

currentAngle = targetAngle;
}

//====================================================
// SCAN FUNCTIONS
//====================================================

int lookForward()
{
moveServoSmooth(CENTER);
delay(80);
return getDistance();
}

int lookLeft()
{
moveServoSmooth(LEFT);
delay(150);

int distance = getDistance();

moveServoSmooth(CENTER);

return distance;
}

int lookRight()
{
moveServoSmooth(RIGHT);
delay(150);

int distance = getDistance();

moveServoSmooth(CENTER);

return distance;
}//====================================================
// SMART TURN FUNCTIONS
//====================================================

void smartTurnLeft()
{
  for (int i = 0; i < 12; i++)
  {
    turnLeft();
    delay(120);

    stopRobot();
    delay(40);

    if (lookForward() > SAFE_DISTANCE)
    {
      return;
    }
  }

  stopRobot();
}

void smartTurnRight()
{
  for (int i = 0; i < 12; i++)
  {
    turnRight();
    delay(120);

    stopRobot();
    delay(40);

    if (lookForward() > SAFE_DISTANCE)
    {
      return;
    }
  }

  stopRobot();
}

//====================================================
// OBSTACLE AVOIDANCE
//====================================================

void avoidObstacle()
{
stopRobot();
delay(100);

// Move back slightly
moveBackward();
delay(250);

stopRobot();
delay(80);

int leftDistance = lookLeft();
delay(50);

int rightDistance = lookRight();
delay(50);

// If both sides are blocked,
// choose the side with slightly more space.
if (leftDistance >= rightDistance)
{
smartTurnLeft();
}
else
{
smartTurnRight();
}
}//====================================================
// SETUP
//====================================================

void setup()
{
// Motor pins
pinMode(AIN1, OUTPUT);
pinMode(AIN2, OUTPUT);
pinMode(PWMA, OUTPUT);

pinMode(BIN1, OUTPUT);
pinMode(BIN2, OUTPUT);
pinMode(PWMB, OUTPUT);

pinMode(STBY, OUTPUT);

// Ultrasonic
pinMode(TRIG, OUTPUT);
pinMode(ECHO, INPUT);

// Enable motor driver
digitalWrite(STBY, HIGH);

// Servo
scanner.attach(SERVO_PIN);
scanner.write(CENTER);

delay(1000);
}

//====================================================
// MAIN LOOP
//====================================================

void loop()
{
int frontDistance = lookForward();

if (frontDistance > STOP_DISTANCE)
{
moveForward();
delay(30);
}
else
{
avoidObstacle();
}
}
