# Receive and Inspect Hardware

This checklist is used to verify newly received hardware before integrating it into the robot.

## Initial Inspection

- [x] Verify all ordered components arrived.
- [x] Check for physical damage.
- [x] Verify connectors, headers, and PCB condition.

---

## Component Testing

| Component | Status | Notes |
|-----------|--------|-------|
| Arduino Nano | ✅ Tested | Working |
| HC-SR04 Ultrasonic Sensor | ✅ Tested | Working |
| SG90 Servo Motor| ✅ Tested | Working |
| L298N Motor Driver| ⚠️ Tested | Inconsistent operation; replaced by TB6612FNG |
| TT Gear Motors| ✅ Tested | Working |
| TB6612FNG Motor Driver | ⏳ Pending | Awaiting delivery/testing |
| 2×18650 Li-ion Cells | ⏳ Pending | Awaiting testing |
| 18650 Battery Holder | ⏳ Pending | Awaiting testing |

---

## Inspection Notes

- The original L298N motor driver exhibited inconsistent behavior during testing.
- The project has been upgraded to a TB6612FNG motor driver for improved efficiency and reliability.
- New components will be tested individually before full system integration.
