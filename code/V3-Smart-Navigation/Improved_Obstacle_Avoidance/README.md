# Improved Obstacle Avoidance

## Purpose

This sketch contains the final Version 3 obstacle-avoidance algorithm for Jarvis Rover.

Building upon Version 2, it introduces smoother movement, improved obstacle detection, and more reliable navigation without requiring additional hardware.

---

# Objectives

- Improve overall navigation quality
- Reduce false obstacle detections
- Smooth servo scanning
- Improve turning accuracy
- Make robot movement more stable
- Reduce unnecessary turns

---

# Hardware Used

- Arduino Nano
- TB6612FNG Motor Driver
- HC-SR04 Ultrasonic Sensor
- SG90 Servo Motor
- 2 × TT Gear Motors
- 2×18650 Li-ion Battery Pack

---

# Improvements Over Version 2

- Smoother servo movement
- Filtered distance measurements
- More reliable obstacle detection
- Better left/right decision making
- Reduced aggressive turning
- Improved movement stability

---

# Navigation Strategy

The robot continuously:

1. Measures the distance ahead.
2. Adjusts its behaviour based on available space.
3. Stops before reaching obstacles.
4. Scans left and right.
5. Chooses the direction with more free space.
6. Performs a controlled turn.
7. Continues autonomous navigation.

---

# Known Limitations

Although significantly improved, Version 3 still has some limitations:

- No adaptive speed control
- No environment classification
- No path memory
- No sensor fusion
- No wheel encoder feedback

These limitations are addressed in the planned Version 4 architecture.

---

# Outcome

Version 3 represents the most stable and reliable navigation software developed for Jarvis Rover before the transition to a modular software architecture in Version 4.
