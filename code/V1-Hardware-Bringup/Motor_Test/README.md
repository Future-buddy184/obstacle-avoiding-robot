# Motor Test

## Purpose

This sketch verifies that both TT gear motors and the TB6612FNG motor driver operate correctly.

The test is performed before integrating the motors into the autonomous robot.

---

## Objectives

- Verify Motor A operation
- Verify Motor B operation
- Confirm motor direction
- Verify PWM speed control
- Check wiring between the Arduino Nano and TB6612FNG

---

## Hardware Used

- Arduino Nano
- TB6612FNG Motor Driver
- 2 × TT Gear Motors
- 2 × 18650 Li-ion Battery Pack

---

## Expected Behaviour

The motors should:

1. Move forward.
2. Stop.
3. Move backward.
4. Stop.

If a motor rotates in the opposite direction, swap its two output wires or update the direction pins in software.

---

## Outcome

Motor testing confirmed that both motors and the TB6612FNG motor driver operated correctly, providing a reliable foundation for later movement and navigation testing.
