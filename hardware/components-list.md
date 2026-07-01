# Components List

## Current Hardware

- Arduino Nano
- HC-SR04 Ultrasonic Sensor
- SG90 Servo Motor
- 2× TT Gear Motors
- Robot Chassis
- Wheels
- Jumper Wires
- /L298N Motor Driver/ (deprecated)
- Battery Pack (4×AA used for initial testing)

---

# Hardware Status

| Component | Status |
|-----------|--------|
| Arduino Nano | ✅ Tested |
| HC-SR04 Ultrasonic Sensor | ✅ Tested |
| SG90 Servo Motor | ✅ Tested |
| TT Gear Motors | ✅ Tested |
| Robot Chassis | ✅ Assembled |
| Wheels | ✅ Installed |
| L298N Motor Driver | ❌ Being Replaced |
| TB6612FNG Motor Driver | ✅ Received |
| 2×18650 Li-ion Cells | ✅ Received |
| 2×18650 Battery Holder | ✅ Received |
| 2S BMS | 📋 Planned |
| 2S Li-ion Charger | 📋 Planned |

---

# Bill of Materials (BOM)

## Electronics

- 1× Arduino Nano V3.0 (ATmega328P)
- 1× HC-SR04 Ultrasonic Sensor
- 1× SG90 9g Servo Motor
- 1× TB6612FNG Motor Driver (upgrade)
- 1× L298N Motor Driver (used during initial testing)

## Mechanical

- 1× 2WD Robot Chassis
- 2× TT Gear Motors
- 2× Wheels
- Mounting Hardware

## Power

#### Initial Setup

- 1× 4×AA Battery Holder
- 4× AA Batteries

#### Upgraded Power System

- 2× 18650 Li-ion Cells (ordered)
- 1× 2×18650 Battery Holder (ordered)
- 1× 2S BMS (planned)
- 1× 2S Li-ion Charger (planned)

## Wiring

- Jumper Wires
- Dupont Connectors

---

# Future Hardware Upgrades

- Bluetooth Module (HC-05)
- ESP32
- Camera Module
- MPU6050 IMU
- Wheel Encoders
- Line Following Sensors

---

# Engineering Notes

The original L298N motor driver produced inconsistent motor behavior during testing, including intermittent operation and insufficient performance under load. After systematic troubleshooting using multimeter measurements, continuity testing, isolated motor tests, and power supply verification, the project was upgraded to a TB6612FNG motor driver for improved efficiency, lower voltage drop, and better long-term reliability.
