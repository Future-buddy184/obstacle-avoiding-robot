# Project Log

## 2026-06-20

- Created GitHub repository.
- Defined project goals.
- Set initial budget (~₹1000).
- Created project roadmap.
- Created architecture document.

---

## 2026-06-21

- Completed Bill of Materials (BOM) research.
- Compared online and Delhi market purchasing options.
- Selected Version 1 hardware configuration.
- Chose servo-based obstacle avoidance.
- Selected a 2WD robot chassis.
- Selected Flyrobo as the supplier.
- Selected DTDC Express shipping.
- Final project cost: ₹1129.

### Ordered Components

- Arduino Nano V3.0 (ATmega328P, CH340, Type-C)
- HC-SR04 Ultrasonic Sensor
- SG90 Servo
- L298N Motor Driver
- 2WD Smart Car Chassis Kit
- Male-Male Jumper Wires
- Male-Female Jumper Wires
- Female-Female Jumper Wires

### Notes

This project was planned as the first step toward building increasingly capable autonomous robotic systems.

---

## 2026-06-25 — Hardware Arrival

### Received

- Arduino Nano
- HC-SR04
- SG90 Servo
- L298N
- 2WD Chassis Kit
- Jumper Wires

### Inspection

- No visible damage.
- Components accounted for.

### Status

Ready for assembly and testing.

---

## 2026-06-29 — Arduino Bring-Up

### Completed

- Installed FTDI Driver 2.08.24.
- Configured Arduino IDE.
- Uploaded Blink example.

### Result

Arduino Nano verified and operational.

---

## 2026-07-01 — Hardware Upgrade

### Completed

- Received TB6612FNG motor driver.
- Received 2×18650 battery holder.
- Received two 18650 Li-ion batteries.
- Soldered header pins onto the motor driver.
- Verified solder joints.
- Confirmed no short circuits with a multimeter.

### TB6612FNG Testing

- Connected the motor driver.
- Successfully controlled Motor A.
- Successfully controlled Motor B.
- Verified PWM speed control.
- Verified forward and reverse rotation.

### Result

Hardware upgrade successfully completed.

---

## 2026-07-02 — Autonomous Robot Development

### Completed

- Connected HC-SR04 and SG90 servo.
- Implemented obstacle detection.
- Developed the first complete obstacle-avoidance program.
- Successfully moved the robot autonomously.

### Issue Encountered

Only Motor A operated after uploading the full obstacle-avoidance program.

---

## 2026-07-02 — Debugging Session

### Investigation

- Re-tested both motors using a simple forward program.
- Confirmed both motors were functional.
- Eliminated hardware failure as the cause.
- Investigated Arduino timer usage.

### Root Cause

Discovered that the Servo library uses **Timer1**, which disables PWM on **D9**.

Original wiring:

- PWMB → D9
- Echo → D11
- Servo → D12

### Solution

Rewired the robot:

- PWMB → D11
- Echo → D9
- Servo → D2

### Result

- Both motors worked correctly.
- Servo operated normally.
- Ultrasonic sensor functioned correctly.
- Robot became fully autonomous.

---

## 2026-07-03 — Navigation Improvements

### Improvements

- Reduced motor speed.
- Implemented smoother servo scanning.
- Added ultrasonic distance filtering.
- Reduced false detections.
- Improved turning behaviour.
- Reduced unnecessary aggressive turns.

### Result

Navigation became smoother and more reliable.

---

## 2026-07-03 — Engineering Review

### Observation

Although the robot successfully avoided obstacles, its navigation remained reactive.

Current behaviour:

```
Obstacle
↓

Stop

↓

Scan

↓

Turn
```

Desired behaviour:

```
Observe Environment
↓

Estimate Risk
↓

Adjust Speed
↓

Plan Motion
↓

Move Smoothly
```

### Decision

Rather than continuing to modify the existing obstacle-avoidance code, redesign the software into a modular robotics architecture.

This marks the beginning of **Jarvis Rover Version 4**.

---

## Current Status

- ✅ Fully autonomous obstacle-avoiding robot completed.
- ✅ Hardware platform stable.
- ✅ Navigation improvements implemented.
- 🚧 Motion Controller under development.
- 🚧 Adaptive Autonomous Navigation (V4) started.
