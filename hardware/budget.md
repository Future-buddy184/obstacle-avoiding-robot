# Project Budget

This document tracks the estimated and actual hardware costs for **Jarvis Rover**, along with the engineering decisions that influenced the budget.

---

# Initial Budget Goal

| Item | Value |
|------|------:|
| Target Budget | **₹1000** |

The goal was to build a capable autonomous robot while keeping costs as low as possible.

---

# Version 1 Budget Estimate

| Component | Estimated Cost |
|-----------|---------------:|
| Arduino Nano V3.0 | ₹250 |
| HC-SR04 Ultrasonic Sensor | ₹80 |
| SG90 Servo Motor | ₹100 |
| L298N Motor Driver | ₹120 |
| 2 × TT Gear Motors | ₹200 |
| 2WD Robot Chassis | ₹150 |
| 4×AA Battery Holder | ₹50 |
| Jumper Wires | ₹50 |

**Estimated Total:** **₹1000**

---

# Hardware Upgrades

During development, several upgrades were made to improve reliability and efficiency.

| Component | Status | Reason |
|-----------|--------|--------|
| TB6612FNG Motor Driver | ✅ Purchased | Higher efficiency and lower voltage drop |
| 2×18650 Battery Holder | ✅ Purchased | Better power system |
| 2×18650 Li-ion Cells | ✅ Purchased | Longer runtime and improved performance |
| Power Switch | ✅ Installed | Safe power control |
| 2S BMS | 📋 Planned | Battery protection |
| 2S Li-ion Charger | 📋 Planned | Safe battery charging |

---

# Budget Evolution

## Version 1

- Initial prototype
- L298N motor driver
- 4×AA battery pack

## Version 2

- Upgraded to TB6612FNG motor driver
- Upgraded to 2×18650 battery system

## Version 3

- No additional hardware cost
- Focused on software optimization and navigation improvements

## Version 4 (Current)

Development focuses primarily on software architecture, requiring little or no additional hardware investment.

---

# Engineering Decisions

The project intentionally exceeded the original budget in a few areas to improve overall performance.

Major improvements included:

- Replacing the L298N motor driver with the TB6612FNG.
- Upgrading from AA batteries to a rechargeable 2×18650 Li-ion power system.
- Improving efficiency, reliability, and runtime.

These upgrades reduced future maintenance costs while providing a stronger hardware foundation for future versions.

---

# Planned Future Expenses

## Communication

- HC-05 Bluetooth Module

## Processing

- ESP32 Development Board

## Navigation

- MPU6050 IMU
- Wheel Encoders
- Line Following Sensors

## Vision

- Camera Module

## Intelligence

- Additional sensors
- AI-capable processing hardware

---

# Budget Philosophy

Jarvis Rover is developed using an incremental investment approach.

Rather than purchasing expensive hardware upfront, components are added only when they provide clear learning value or unlock new capabilities.

This keeps development affordable while allowing the robot to evolve through multiple versions.
