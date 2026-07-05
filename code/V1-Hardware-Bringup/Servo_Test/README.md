# Servo Test

## Purpose

This sketch verifies that the SG90 servo motor operates correctly before integrating it with the HC-SR04 ultrasonic sensor.

Testing the servo independently simplifies debugging and ensures reliable sensor scanning in later versions of Jarvis Rover.

---

## Objectives

- Verify servo operation
- Confirm full range of motion
- Verify center position
- Check wiring and power connections

---

## Hardware Used

- Arduino Nano
- SG90 Micro Servo

---

## Expected Behaviour

The servo should:

1. Rotate smoothly to 0°.
2. Move to the center position (90°).
3. Rotate to 180°.
4. Return to the center.
5. Repeat continuously.

Movement should be smooth without excessive vibration.

---

## Outcome

Servo testing confirmed reliable operation and established the center position used for ultrasonic sensor scanning in future versions of Jarvis Rover.
