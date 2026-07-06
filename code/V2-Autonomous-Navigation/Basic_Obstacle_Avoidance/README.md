# Basic Obstacle Avoidance

## Purpose

This sketch implements the first complete autonomous obstacle-avoidance algorithm for Jarvis Rover.

It combines the Arduino Nano, TB6612FNG motor driver, HC-SR04 ultrasonic sensor, and SG90 servo motor into a single autonomous system capable of detecting obstacles and selecting an alternative path.

---

# Objectives

- Drive the robot forward autonomously
- Detect obstacles ahead
- Scan the environment using the servo-mounted ultrasonic sensor
- Compare left and right distances
- Turn toward the side with more free space
- Resume forward movement

---

# Hardware Used

- Arduino Nano
- TB6612FNG Motor Driver
- HC-SR04 Ultrasonic Sensor
- SG90 Servo Motor
- 2 × TT Gear Motors
- 2×18650 Li-ion Battery Pack

---

# Navigation Strategy

The robot follows a simple decision-making process:

1. Move forward.
2. Measure the distance ahead.
3. If the path is clear, continue moving.
4. If an obstacle is detected:
   - Stop.
   - Scan left.
   - Scan right.
   - Compare both distances.
   - Turn toward the side with greater free space.
5. Continue moving forward.

---

# Features

- Autonomous obstacle detection
- Servo-based environmental scanning
- Automatic path selection
- Continuous navigation loop

---

# Limitations

Version 2 prioritizes functionality over smooth movement.

Known limitations include:

- Abrupt turns
- Fixed motor speed
- Fixed obstacle detection distance
- No speed adaptation
- No sensor filtering

These limitations became the focus of Version 3.

---

# Outcome

Version 2 successfully demonstrated autonomous obstacle avoidance and established the software foundation for future navigation improvements.
