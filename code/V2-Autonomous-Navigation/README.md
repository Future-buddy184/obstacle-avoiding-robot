# Version 2 – Autonomous Navigation

## Overview

Version 2 marks the transition from hardware validation to autonomous robot behaviour.

For the first time, all major hardware components were integrated into a single program, allowing Jarvis Rover to detect obstacles, make decisions, and navigate without human intervention.

---

# Objectives

- Integrate all hardware components
- Detect obstacles using the HC-SR04 ultrasonic sensor
- Scan the environment using the SG90 servo
- Compare left and right distances
- Select the safest direction
- Navigate autonomously

---

# Project Structure

```text
V2-Autonomous-Navigation/

├── README.md
└── Basic_Obstacle_Avoidance/
```

---

# Key Features

- Forward obstacle detection
- Servo-based environmental scanning
- Left/right path comparison
- Automatic turning
- Continuous autonomous navigation

---

# Development Philosophy

Version 2 focused on combining individually tested hardware into a complete autonomous system.

The emphasis was on achieving reliable obstacle avoidance before optimizing movement quality or navigation intelligence.

---

# Lessons Learned

During Version 2 development, several important concepts were introduced:

- Sensor-driven decision making
- Autonomous navigation
- Sequential task execution
- Integration of multiple hardware subsystems
- Real-world robot behaviour

---

# Outcome

Version 2 successfully transformed Jarvis Rover from a manually tested robot into an autonomous obstacle-avoiding robot.

The experience gained during this phase led directly to the navigation improvements implemented in Version 3.
