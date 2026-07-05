# Ultrasonic Test

## Purpose

This sketch verifies that the HC-SR04 ultrasonic sensor measures distances accurately before being integrated into the obstacle-avoidance system.

The Serial Monitor is used to display real-time distance measurements for debugging and validation.

---

## Objectives

- Verify HC-SR04 operation
- Measure object distance accurately
- Validate sensor wiring
- Learn Serial Monitor debugging

---

## Hardware Used

- Arduino Nano
- HC-SR04 Ultrasonic Sensor

---

## Pin Configuration

| HC-SR04 Pin | Arduino Nano |
|-------------|--------------|
| VCC | 5V |
| GND | GND |
| TRIG | D10 |
| ECHO | D11 |

---

## Expected Behaviour

The sensor continuously measures the distance to the nearest object and displays the values in the Arduino Serial Monitor.

Moving an object closer or farther from the sensor should produce corresponding changes in the measured distance.

---

## Outcome

Ultrasonic testing confirmed stable distance measurements and established a reliable sensing system for autonomous obstacle detection.
