# Jarvis Rover
> **Repository:** `obstacle-avoiding-robot`

An Arduino Nano-based autonomous mobile robot developed from scratch as a hands-on platform for learning robotics, embedded systems, electronics, Arduino programming, software engineering, and autonomous navigation.

The project began as a basic obstacle-avoiding robot and has gradually evolved into a long-term robotics platform focused on modular software architecture, intelligent navigation, and future AI integration.

---

# Project Goals

- Learn Arduino programming
- Learn embedded systems
- Learn electronics and circuit debugging
- Learn robotics fundamentals
- Learn Git and GitHub
- Develop systematic hardware and software debugging skills
- Build an autonomous mobile robot from scratch
- Design scalable robotics software architecture
- Prepare the foundation for future AI-powered robotics

---

# Hardware Used

- Arduino Nano
- TB6612FNG Motor Driver
- HC-SR04 Ultrasonic Sensor
- SG90 Servo Motor
- 2× BO Gear Motors
- Robot Chassis
- 2×18650 Li-ion Battery Pack
- Power Switch

---

# Project Gallery

Project photographs documenting the development of **Jarvis Rover** are available in the `images/` directory.

The gallery will continue to grow as new hardware and software milestones are completed.

---

# Technologies

- Arduino IDE
- Embedded C++
- Git
- GitHub
- Serial Monitor
- PWM Motor Control
- Ultrasonic Distance Sensing

---

# Project Evolution

| Version | Status | Milestone |
|---------|--------|-----------|
| ✅ V1 | Completed | Hardware assembly, wiring, component testing, and basic motor control |
| ✅ V2 | Completed | First autonomous obstacle-avoiding robot |
| ✅ V3 | Completed | Smarter navigation with smoother servo scanning, filtered distance measurements, adaptive turning, and stable obstacle avoidance |
| 🚧 V4 | In Development | Modular architecture, adaptive speed control, environment analysis, and intelligent navigation |

---

# Current Stable Release

**Latest Stable Software:** Version 3 – Smart Navigation

Version 3 is the latest fully tested implementation of Jarvis Rover. It provides stable autonomous obstacle avoidance using smooth servo scanning, filtered ultrasonic measurements, and improved turning behavior.

Development is now focused on **Version 4**, which introduces a modular software architecture for more intelligent autonomous navigation.

---

# Current Project Status

## ✅ Completed

- [x] Repository created
- [x] Project roadmap created
- [x] Robot chassis assembled
- [x] Motors installed
- [x] Wheels installed
- [x] Servo mounted
- [x] Ultrasonic sensor mounted
- [x] Initial wiring completed
- [x] Individual motor testing
- [x] Servo testing
- [x] Ultrasonic sensor testing
- [x] Basic movement code tested
- [x] GitHub SSH authentication completed
- [x] Extensive hardware troubleshooting documented
- [x] All ordered components received
- [x] TB6612FNG motor driver integrated
- [x] 2×18650 battery power system integrated
- [x] Autonomous obstacle-avoiding robot completed
- [x] Servo scanning implemented
- [x] Ultrasonic distance measurement implemented
- [x] Distance filtering implemented
- [x] Adaptive turning implemented
- [x] Servo–PWM timer conflict identified and resolved
- [x] Hardware rewiring completed
- [x] Stable obstacle avoidance achieved
- [x] Planning started for Jarvis Rover V4 architecture

---

# Current Development

## 🚧 Jarvis Rover V4 – Adaptive Autonomous Navigation

The software is currently being redesigned into a modular architecture.

### Planned Modules

- [ ] Motion Controller
- [ ] Adaptive Speed Controller
- [ ] Sensor Manager
- [ ] Environment Analyzer
- [ ] Decision Engine
- [ ] Navigation Engine
- [ ] Recovery System

---

# Engineering Highlights

During development, several real engineering challenges were encountered and solved.

Highlights include:

- Replacing the L298N motor driver with the more efficient TB6612FNG.
- Identifying a Servo library and PWM timer conflict on the Arduino Nano that prevented one motor from operating correctly.
- Redesigning the wiring to eliminate timer conflicts.
- Improving navigation through smoother servo scanning, filtered ultrasonic readings, and adaptive turning.
- Transitioning from a simple reactive obstacle-avoiding robot toward a modular autonomous rover architecture.

These experiences strengthened practical skills in embedded systems, debugging, hardware integration, and robotics software engineering.

---

# Future Improvements

## Navigation

- Adaptive speed control
- Environment-aware driving
- Wall following
- Maze solving

## Control

- Bluetooth remote control
- Manual driving mode

## Hardware

- Wheel encoders
- IMU integration
- ESP32 migration

## Intelligence

- Camera integration
- Computer vision
- AI-assisted navigation

---

# Repository Structure

```text
.
├── code/
├── docs/
├── hardware/
├── images/
├── software/
├── README.md
├── ROADMAP.md
├── LESSONS-LEARNED.md
└── LICENSE
```

---

This repository documents the complete engineering journey of **Jarvis Rover**—from hardware assembly and component testing to autonomous navigation, systematic debugging, and the development of a modular robotics platform designed for future AI-powered robotics.
