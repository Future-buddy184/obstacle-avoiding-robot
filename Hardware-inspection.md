# Receive and Inspect Hardware

This checklist records the inspection and verification of hardware components before they were integrated into **Jarvis Rover**.

---

# Initial Inspection

- [x] Verified all ordered components arrived.
- [x] Checked all components for physical damage.
- [x] Inspected PCB quality and solder joints.
- [x] Verified connectors and headers.
- [x] Confirmed all ordered items matched the Bill of Materials (BOM).

---

# Component Verification

| Component | Status | Notes |
|-----------|--------|-------|
| Arduino Nano V3.0 | ✅ Tested | Uploaded Blink program successfully |
| HC-SR04 Ultrasonic Sensor | ✅ Tested | Stable distance measurements |
| SG90 Servo Motor | ✅ Tested | Full movement verified |
| TT Gear Motors (2) | ✅ Tested | Both motors verified individually |
| L298N Motor Driver | ⚠️ Tested | Functional but unreliable under load; deprecated |
| TB6612FNG Motor Driver | ✅ Tested | Successfully controls both motors |
| 2×18650 Li-ion Cells | ✅ Tested | Stable power supply |
| 2×18650 Battery Holder | ✅ Tested | Verified wiring and output |
| Power Switch | ✅ Installed | Operating correctly |

---

# Integration Verification

- [x] Motors tested individually.
- [x] Servo tested independently.
- [x] Ultrasonic sensor tested independently.
- [x] TB6612FNG tested with Motor A.
- [x] TB6612FNG tested with Motor B.
- [x] Full robot wiring verified.
- [x] Autonomous obstacle avoidance verified.

---

# Engineering Notes

## L298N Evaluation

Although the L298N motor driver was functional, testing revealed:

- Noticeable voltage drop
- Reduced motor performance
- Inconsistent behavior under load

The driver was replaced with the **TB6612FNG**, which provides:

- Higher efficiency
- Lower voltage drop
- Better battery utilization
- More reliable motor control

---

## Testing Strategy

Every major component was tested independently before integrating it into the complete robot.

This incremental approach simplified troubleshooting and helped isolate hardware and software issues during development.

---

# Inspection Status

- ✅ Hardware inspection complete
- ✅ Component testing complete
- ✅ System integration complete
- ✅ Ready for software development
