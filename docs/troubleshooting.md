# Last Updated: July 2026

# Troubleshooting Log

This document records the major hardware and software issues encountered during the development of **Jarvis Rover**, along with the investigation process, root causes, and solutions.

---

# Issue 1: Robot Only Worked While Arduino Nano Was Connected Through USB

## Symptoms

- Robot worked while connected to a computer through USB.
- Robot stopped working after disconnecting USB.

## Investigation

- Verified power wiring.
- Checked common ground connections.
- Tested battery voltage.
- Verified Nano power input.
- Tested motor driver power supply.

## Root Cause

The original power configuration and motor driver did not provide reliable motor operation under load.

## Solution

- Upgraded to a TB6612FNG motor driver.
- Upgraded the power system to a 2×18650 Li-ion battery pack.

## Result

Stable power delivery and improved motor performance.

---

# Issue 2: Motors Failed to Rotate Correctly

## Symptoms

- Motors occasionally vibrated.
- Motors sometimes required a manual push to start.
- One motor occasionally remained stationary.

## Investigation

- Tested each motor individually.
- Swapped motor connections.
- Verified wiring continuity with a multimeter.
- Measured motor driver output voltage.
- Tested Arduino digital outputs.

## Root Cause

The motors were functional. The issue originated from the motor driver rather than the motors themselves.

## Solution

Replaced the L298N with the TB6612FNG motor driver.

## Result

Both motors operated normally.

---

# Issue 3: L298N Motor Driver Limitations

## Observations

- Intermittent motor operation.
- Inconsistent output voltage.
- Driver occasionally recovered after power cycling.
- Motors worked individually but behaved unpredictably together.

## Conclusion

The L298N was limiting reliability and efficiency.

## Solution

Migrated to the TB6612FNG motor driver.

## Result

More efficient motor control and lower power loss.

---

# Issue 4: Only Motor A Worked During Autonomous Mode

## Symptoms

- Both motors worked during the forward test.
- Only Motor A operated after uploading the complete obstacle-avoidance program.

## Investigation

- Uploaded a simplified forward-only program.
- Confirmed both motors operated correctly.
- Verified battery wiring.
- Verified common ground.
- Compared working and non-working programs.

## Root Cause

The problem was software-related rather than a hardware failure.

Further investigation identified a timer conflict between the Servo library and PWM output.

---

# Issue 5: Servo Library Disabled Motor PWM

## Symptoms

- Motor B stopped whenever the Servo library was enabled.
- Removing the Servo library restored normal motor operation.

## Investigation

- Reviewed Arduino Nano timer usage.
- Compared PWM pins with Servo library requirements.
- Verified pin assignments.

Original wiring:

```
PWMB → D9
Echo → D11
Servo → D12
```

## Root Cause

The Servo library uses **Timer1**, which also controls PWM on **D9**.

As a result, Motor B lost its PWM signal.

## Solution

Rewired the robot:

```
PWMB → D11
Echo → D9
Servo → D2
```

Updated the software accordingly.

## Result

- Both motors operated correctly.
- Servo scanned normally.
- Ultrasonic sensor functioned correctly.
- Full obstacle avoidance restored.

---

# Issue 6: Aggressive Turning and Occasional Collisions

## Symptoms

- Robot turned farther than necessary.
- Robot sometimes collided after detecting an obstacle.
- Robot accelerated too quickly after completing a turn.

## Investigation

- Observed robot behaviour in different environments.
- Compared sensor readings during navigation.
- Evaluated turning delays and motor speeds.

## Root Cause

The navigation algorithm reacted immediately to obstacles without considering the surrounding environment.

## Solution

Implemented:

- Reduced motor speed.
- Smooth servo scanning.
- Distance filtering.
- Adaptive turning.
- Navigation tuning.

## Result

Navigation became smoother, more stable, and significantly more reliable.

---

# Engineering Lessons

- Always isolate hardware and software before assuming a component has failed.
- Test with the simplest possible program before making wiring changes.
- Hardware timers can affect seemingly unrelated peripherals.
- Stable navigation depends on both reliable sensing and smooth motion control.
- Solving the root cause is more valuable than applying temporary fixes.

---

# Current Status

- ✅ Stable hardware platform
- ✅ Reliable power system
- ✅ Fully autonomous obstacle-avoiding robot
- ✅ Timer conflict resolved
- ✅ Navigation optimized
- 🚧 Beginning Jarvis Rover Version 4
