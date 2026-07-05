# Version 1 – Hardware Bring-Up

## Overview

Version 1 focused on verifying that every hardware component functioned correctly before integrating the complete robot.

Rather than writing the obstacle-avoidance program immediately, each subsystem was tested independently to simplify debugging and build confidence in the hardware.

---

# Objectives

- Verify Arduino Nano operation
- Test both TT gear motors
- Test the SG90 servo motor
- Test the HC-SR04 ultrasonic sensor
- Verify motor driver operation
- Confirm correct wiring
- Test basic robot movement

---

# Project Structure

```text
V1-Hardware-Bringup/

├── Motor_Test/
├── Servo_Test/
├── Ultrasonic_Test/
└── Basic_Movement/
```

---

# Development Philosophy

Every hardware component was tested independently before system integration.

This incremental approach made it easier to identify wiring mistakes, hardware faults, and software issues.

---

# Lessons Learned

During Version 1 development, several important lessons were learned:

- Test one component at a time.
- Verify wiring before debugging software.
- Use simple sketches for hardware validation.
- Preserve working code before adding new features.

These practices became the foundation for future versions of Jarvis Rover.

---

# Outcome

Version 1 successfully verified all major hardware components and established a reliable foundation for autonomous navigation.

The project then progressed to **Version 2 – Autonomous Navigation**, where the first complete obstacle-avoidance algorithm was implemented.
