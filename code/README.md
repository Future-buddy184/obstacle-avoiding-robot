# Code

This directory contains the Arduino source code for **Jarvis Rover**.

The project follows a version-based development approach. Each version introduces new features while preserving previous milestones for reference, learning, debugging, and comparison.

---

# Repository Navigation

Each version represents an engineering milestone in the development of Jarvis Rover.

Earlier versions are intentionally preserved to document the project's evolution and provide a reference for future improvements.

---

# Code Structure

```text
code/
│
├── README.md
│
├── V1-Hardware-Bringup/
│   ├── README.md
│   ├── Motor_Test/
│   ├── Servo_Test/
│   ├── Ultrasonic_Test/
│   └── Basic_Movement/
│
├── V2-Autonomous-Navigation/
│   ├── README.md
│   └── Basic_Obstacle_Avoidance/
│
├── V3-Smart-Navigation/
│   ├── README.md
│   └── Improved_Obstacle_Avoidance/
│
└── V4-Adaptive-Navigation/
    ├── README.md
    └── (In Development)
```

---

# Version Overview

## Version 1 – Hardware Bring-Up ✅

### Purpose

Verify that every hardware component operates correctly before integrating the complete robot.

### Includes

- Motor testing
- Servo testing
- Ultrasonic sensor testing
- Basic movement testing

---

## Version 2 – Autonomous Navigation ✅

### Purpose

Implement the first complete autonomous obstacle-avoidance algorithm.

### Features

- Forward obstacle detection
- Servo scanning
- Left/right path selection
- Basic autonomous navigation

---

## Version 3 – Smart Navigation ✅

### Purpose

Improve navigation quality, stability, and movement smoothness.

### Features

- Smooth servo scanning
- Filtered ultrasonic measurements
- Reduced false detections
- Adaptive turning
- Improved movement stability

---

## Version 4 – Adaptive Navigation 🚧

### Purpose

Develop a modular robotics software architecture that supports more intelligent autonomous navigation.

### Planned Modules

- Sensor Manager
- Environment Analyzer
- Decision Engine
- Motion Controller
- Adaptive Speed Controller

---

# Development Principles

- Build incrementally.
- Test one subsystem at a time.
- Keep code modular and reusable.
- Document every significant change.
- Preserve previous working versions.
- Improve software through iterative development.

---

# Current Stable Version

**Version 3 – Smart Navigation** is the latest fully tested and operational release.

Development is now focused on **Version 4 – Adaptive Navigation**, introducing a modular software architecture, adaptive speed control, and more intelligent navigation behaviour.

---

# Future Development

Future versions may introduce:

- Wheel encoders
- IMU integration
- Sensor fusion
- Bluetooth control
- ESP32 migration
- Camera integration
- Computer vision
- AI-assisted navigation
