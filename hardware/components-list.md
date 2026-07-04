# Hardware Components

This document lists all hardware used in **Jarvis Rover**, including currently installed components, deprecated hardware, planned upgrades, and future expansion.

---

# Current Hardware

| Component | Qty | Purpose | Status |
|-----------|----:|---------|--------|
| Arduino Nano V3.0 (ATmega328P) | 1 | Main controller | ✅ Installed |
| HC-SR04 Ultrasonic Sensor | 1 | Distance measurement | ✅ Installed |
| SG90 Servo Motor | 1 | Sensor scanning | ✅ Installed |
| TB6612FNG Motor Driver | 1 | Motor control | ✅ Installed |
| TT Gear Motor | 2 | Robot drive | ✅ Installed |
| 2WD Robot Chassis | 1 | Mechanical platform | ✅ Assembled |
| Wheels | 2 | Locomotion | ✅ Installed |
| Caster Wheel | 1 | Balance | ✅ Installed |
| Jumper Wires | Multiple | Electrical connections | ✅ Installed |
| 18650 Li-ion Cells | 2 | Main power source | ✅ Installed |
| 2×18650 Battery Holder | 1 | Battery mounting | ✅ Installed |
| Power Switch | 1 | Main power control | ✅ Installed |

---

# Deprecated Hardware

| Component | Reason |
|-----------|--------|
| L298N Motor Driver | Replaced by TB6612FNG due to lower efficiency, higher voltage drop, and inconsistent performance during testing |
| 4×AA Battery Pack | Used during initial testing before upgrading to the 2×18650 power system |

---

# Bill of Materials (BOM)

## Electronics

- Arduino Nano V3.0 (ATmega328P)
- HC-SR04 Ultrasonic Sensor
- SG90 Micro Servo
- TB6612FNG Motor Driver

## Mechanical

- 2WD Robot Chassis
- 2 × TT Gear Motors
- 2 × Wheels
- 1 × Caster Wheel
- Mounting hardware

## Power System

- 2 × 18650 Li-ion Cells
- 2×18650 Battery Holder
- Power Switch

## Wiring

- Male-Male Jumper Wires
- Male-Female Jumper Wires
- Female-Female Jumper Wires
- Dupont Connectors

---

# Planned Hardware

| Component | Purpose |
|-----------|---------|
| 2S BMS | Battery protection |
| 2S Li-ion Charger | Battery charging |
| Battery voltage monitor | Monitor battery level |

---

# Future Hardware Upgrades

## Communication

- HC-05 Bluetooth Module
- ESP32

## Navigation

- Wheel Encoders
- MPU6050 IMU
- Line Following Sensors

## Vision

- Camera Module

## Intelligence

- Additional environmental sensors
- Sensor fusion hardware
- AI-capable processing platform

---

# Engineering Notes

During early development, the L298N motor driver produced intermittent motor operation and significant voltage loss under load.

A systematic debugging process—including multimeter measurements, continuity testing, isolated motor testing, and power verification—showed that the motors and Arduino Nano were functioning correctly.

The project was upgraded to the **TB6612FNG motor driver**, resulting in:

- Higher motor efficiency
- Lower voltage drop
- Better battery utilization
- More reliable motor control
- Improved overall robot performance
