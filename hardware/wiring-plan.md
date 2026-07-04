# Wiring Plan

This document describes the final verified wiring configuration of **Jarvis Rover Version 3**.

---

# Hardware

- Arduino Nano (ATmega328P)
- TB6612FNG Motor Driver
- HC-SR04 Ultrasonic Sensor
- SG90 Servo Motor
- 2 × TT Gear Motors
- 2 × 18650 Li-ion Battery Pack
- Power Switch

---

# Arduino Pin Assignments

| Arduino Pin | Connected To | Purpose |
|-------------|--------------|---------|
| D3 | AIN2 | Left Motor Direction |
| D4 | AIN1 | Left Motor Direction |
| D5 (PWM) | PWMA | Left Motor Speed |
| D6 | BIN2 | Right Motor Direction |
| D7 | BIN1 | Right Motor Direction |
| D8 | STBY | Enable Motor Driver |
| D9 | Echo | Ultrasonic Echo |
| D10 | Trig | Ultrasonic Trigger |
| D11 (PWM) | PWMB | Right Motor Speed |
| D2 | Servo Signal | Servo Control |

---

# HC-SR04 Connections

| HC-SR04 | Arduino Nano |
|----------|--------------|
| VCC | 5V |
| GND | GND |
| TRIG | D10 |
| ECHO | D9 |

---

# SG90 Servo Connections

| Servo | Arduino Nano |
|--------|--------------|
| Signal | D2 |
| VCC | 5V |
| GND | GND |

---

# TB6612FNG Connections

| TB6612FNG | Arduino Nano |
|------------|--------------|
| PWMA | D5 |
| AIN1 | D4 |
| AIN2 | D3 |
| PWMB | D11 |
| BIN1 | D7 |
| BIN2 | D6 |
| STBY | D8 |
| VCC | 5V |
| VM | Battery Positive |
| GND | Common Ground |

---

# Motor Connections

| Motor | Driver Output |
|--------|---------------|
| Left Motor | A01 / A02 |
| Right Motor | B01 / B02 |

If a motor rotates in the wrong direction, swap its two output wires.

---

# Power Distribution

## Motor Power

- 2×18650 Battery Positive → TB6612FNG VM
- Battery Negative → TB6612FNG GND

## Logic Power

- Arduino 5V → TB6612FNG VCC
- Arduino GND → TB6612FNG GND

## Development

- Arduino Nano powered through USB during programming and testing.
- Motor driver powered independently by the battery pack.

⚠️ Arduino GND and battery GND **must** be connected together (common ground).

---

# Wiring Notes

## Initial Configuration

The original prototype used:

- L298N Motor Driver
- 4×AA Battery Pack

This configuration showed inconsistent motor performance and was retired.

---

## Final Configuration

The robot now uses:

- TB6612FNG Motor Driver
- 2×18650 Li-ion Battery Pack
- Dedicated USB power for the Arduino during development

---

## Important Design Decision

During development, a conflict was discovered between the Arduino Servo library and PWM output on **D9** (Timer1).

To resolve this:

- Servo Signal was moved to **D2**
- Motor B PWM was moved to **D11**
- Ultrasonic Echo was moved to **D9**

This configuration has been fully tested and is the official wiring for Jarvis Rover Version 3.

---

# Wiring Status

- ✅ Hardware assembled
- ✅ Wiring verified
- ✅ Motors tested
- ✅ Servo tested
- ✅ Ultrasonic sensor tested
- ✅ Autonomous navigation verified
