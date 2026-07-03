# Development Log

This document records the chronological development of **Jarvis Rover**, documenting major milestones, engineering decisions, hardware upgrades, software improvements, testing, and lessons learned throughout the project.

---

# 2026-06-20 — Project Started

## Milestones

- Created the GitHub repository.
- Defined the project goals.
- Planned the initial repository structure.
- Created the development roadmap.
- Established documentation before writing code.

## Outcome

A well-structured foundation was created to support long-term project development.

---

# 2026-06-24 — Hardware Received

## Milestones

- Received the initial hardware components.
- Inspected all components for physical damage.
- Verified all required components were present.

## Outcome

Hardware was ready for assembly and testing.

---

# 2026-06-25 — Robot Assembly

## Milestones

- Assembled the robot chassis.
- Installed both BO gear motors.
- Mounted the Arduino Nano.
- Mounted the HC-SR04 ultrasonic sensor.
- Mounted the SG90 servo motor.

## Outcome

Mechanical assembly completed successfully.

---

# 2026-06-25 — Initial Hardware Testing

## Milestones

- Tested the SG90 servo motor.
- Tested the HC-SR04 ultrasonic sensor.
- Verified Arduino Nano operation.
- Tested each motor individually.
- Verified basic robot movement.

## Outcome

All hardware components functioned correctly.

---

# 2026-06-26 — Motor Driver Investigation

## Milestones

- Encountered inconsistent motor behavior.
- Performed multimeter testing.
- Verified wiring continuity.
- Tested motors individually.
- Identified the L298N motor driver as the likely source of the problem.

## Outcome

Decided to replace the L298N with the more efficient TB6612FNG motor driver.

---

# 2026-06-27 — Hardware Upgrade Ordered

## Milestones

- Ordered the TB6612FNG motor driver.
- Ordered a 2-cell 18650 battery holder.
- Ordered two 18650 Li-ion batteries.

## Outcome

The project entered the hardware upgrade phase.

---

# 2026-07-02 — Hardware Upgrade and Integration

## Milestones

- Installed the TB6612FNG motor driver.
- Installed the 2×18650 battery system.
- Rewired the robot for the new hardware.
- Verified power distribution.
- Successfully tested both motors.

## Outcome

The robot became more efficient, reliable, and ready for autonomous navigation.

---

# 2026-07-03 — First Autonomous Robot

## Milestones

- Implemented the complete obstacle-avoidance algorithm.
- Integrated ultrasonic distance sensing.
- Added servo-based environmental scanning.
- Successfully completed autonomous obstacle avoidance.

## Outcome

The first fully autonomous version of the robot was completed.

---

# 2026-07-03 — Debugging and Hardware Optimization

## Milestones

- Discovered that only one motor operated during autonomous mode.
- Verified hardware using simplified motor test programs.
- Identified a Servo library and PWM timer conflict on the Arduino Nano.
- Reassigned motor driver and sensor pins.
- Updated wiring plan.
- Verified correct operation after rewiring.

## Outcome

Resolved one of the most significant hardware/software integration issues encountered during development.

---

# 2026-07-03 — Navigation Improvements

## Milestones

- Improved servo scanning behavior.
- Added distance filtering.
- Reduced false obstacle detections.
- Implemented adaptive turning.
- Reduced aggressive turning.
- Improved overall navigation stability.

## Outcome

The robot demonstrated smoother and more reliable autonomous movement.

---

# 2026-07-03 — Beginning Jarvis Rover V4

## Milestones

- Evaluated limitations of reactive obstacle avoidance.
- Planned a modular software architecture.
- Designed the Motion Controller concept.
- Planned adaptive speed control.
- Planned environment-aware navigation.
- Started Version 4 development.

## Outcome

The project transitioned from a simple obstacle-avoiding robot into a modular autonomous robotics platform.

---

# Next Milestones

- Build the Motion Controller.
- Implement adaptive speed control.
- Develop the Environment Analyzer.
- Build the Decision Engine.
- Improve modular software architecture.
- Continue Version 4 development.
