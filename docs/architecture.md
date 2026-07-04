# Jarvis Rover Architecture

## Overview

Jarvis Rover is designed using a modular architecture that separates hardware control, sensing, decision-making, and navigation into independent subsystems.

The goal is to make the software easier to understand, debug, extend, and reuse as the robot evolves.

---

# System Architecture

```
                   Environment
                        │
                        ▼
              ┌──────────────────┐
              │ Ultrasonic Sensor │
              └─────────┬─────────┘
                        │
                        ▼
              ┌──────────────────┐
              │ Sensor Manager   │
              └─────────┬─────────┘
                        │
                        ▼
          ┌──────────────────────────┐
          │ Environment Analyzer     │
          └─────────┬────────────────┘
                    │
                    ▼
          ┌──────────────────────────┐
          │ Decision Engine          │
          └─────────┬────────────────┘
                    │
                    ▼
          ┌──────────────────────────┐
          │ Motion Controller        │
          └─────────┬────────────────┘
                    │
                    ▼
          ┌──────────────────────────┐
          │ TB6612FNG Motor Driver   │
          └─────────┬────────────────┘
                    │
          ┌─────────┴─────────┐
          ▼                   ▼
     Left Motor          Right Motor
```

---

# Hardware Architecture

## Power System

- 2×18650 Li-ion Battery Pack
- Power switch
- TB6612FNG motor driver
- Arduino Nano

---

## Control System

- Arduino Nano
- Motion Controller
- Navigation Logic
- Decision Engine

---

## Sensor System

- HC-SR04 Ultrasonic Sensor
- SG90 Servo Motor

---

## Drive System

- TB6612FNG Motor Driver
- Left BO Gear Motor
- Right BO Gear Motor

---

# Software Architecture

## Sensor Manager

Responsibilities

- Read ultrasonic distance
- Control servo scanning
- Filter noisy sensor data
- Provide reliable measurements

---

## Environment Analyzer

Responsibilities

- Detect nearby obstacles
- Estimate available free space
- Identify narrow passages
- Evaluate navigation risk

---

## Decision Engine

Responsibilities

- Decide whether to move forward
- Determine turning direction
- Select appropriate driving behavior
- Recover from dead ends

---

## Motion Controller

Responsibilities

- Smooth acceleration
- Smooth braking
- Speed control
- Turning control
- Maintain stable movement

---

# Data Flow

```
Environment

↓

Ultrasonic Sensor

↓

Sensor Manager

↓

Environment Analyzer

↓

Decision Engine

↓

Motion Controller

↓

TB6612FNG

↓

Motors
```

---

# Current Development Stage

## ✅ Version 1

- Hardware assembly
- Basic testing

## ✅ Version 2

- Autonomous obstacle avoidance

## ✅ Version 3

- Smarter navigation
- Adaptive turning
- Stable movement

## 🚧 Version 4

Currently under development.

Planned modules:

- Motion Controller
- Adaptive Speed Controller
- Environment Analyzer
- Decision Engine
- Recovery System

---

# Design Principles

- Modular software
- Incremental development
- Test one subsystem at a time
- Prefer reusable code
- Solve root causes
- Keep documentation synchronized with development

---

# Future Expansion

The architecture is intentionally modular to support future upgrades such as:

- Wheel encoders
- IMU
- Sensor fusion
- Bluetooth
- Wi-Fi
- ESP32 migration
- Camera integration
- Computer vision
- AI-assisted navigation
