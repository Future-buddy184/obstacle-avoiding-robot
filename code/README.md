# Code

This directory contains the Arduino source code for **Jarvis Rover**.

The project follows a version-based development approach. Each version introduces new features while preserving previous milestones for reference and learning.

---

# Code Structure

```
code/
├── V1/
│   ├── Motor_Test
│   ├── Servo_Test
│   ├── Ultrasonic_Test
│   └── Basic_Movement
│
├── V2/
│   └── Basic_Obstacle_Avoidance
│
├── V3/
│   └── Improved_Obstacle_Avoidance
│
└── V4/
    └── Adaptive_Autonomous_Navigation (In Development)
```

---

# Version Overview

## Version 1 – Hardware Bring-Up ✅

Purpose:

- Verify each hardware component independently.

Includes:

- Motor testing
- Servo testing
- Ultrasonic sensor testing
- Basic movement

---

## Version 2 – Autonomous Robot ✅

Purpose:

- Implement the first complete obstacle-avoidance algorithm.

Features:

- Servo scanning
- Left/right decision making
- Autonomous navigation

---

## Version 3 – Smarter Navigation ✅

Purpose:

- Improve navigation quality and stability.

Features:

- Smooth servo scanning
- Filtered ultrasonic measurements
- Reduced false detections
- Improved turning behaviour
- More stable movement

---

## Version 4 – Adaptive Autonomous Navigation 🚧

Purpose:

Develop a modular robotics software architecture.

Planned Modules:

- Sensor Manager
- Environment Analyzer
- Decision Engine
- Motion Controller
- Adaptive Speed Control

---

# Development Principles

- Build incrementally.
- Keep code modular.
- Test one subsystem at a time.
- Document every significant change.
- Preserve previous working versions.

---

# Current Stable Version

**Version 3** is the latest fully tested and operational version of Jarvis Rover.

Development is now focused on **Version 4**, which introduces a modular software architecture for more intelligent autonomous navigation.
