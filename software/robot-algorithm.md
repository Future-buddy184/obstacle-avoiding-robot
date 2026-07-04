# Robot Navigation Algorithm

## Overview

Jarvis Rover uses an iterative development approach where each version improves the robot's navigation capabilities.

The goal is to gradually evolve from simple reactive obstacle avoidance to intelligent autonomous navigation.

---

# Version 1 – Basic Motion Control ✅

## Objective

Verify hardware operation and motor control.

### Algorithm

1. Move forward.
2. Stop.
3. Move backward.
4. Turn left.
5. Turn right.
6. Repeat.

### Outcome

- Verified motor driver operation.
- Verified motor direction.
- Verified PWM speed control.

---

# Version 2 – Autonomous Obstacle Avoidance ✅

## Objective

Enable the robot to navigate autonomously while avoiding obstacles.

### Algorithm

1. Move forward.
2. Measure front distance.
3. If path is clear:
   - Continue forward.
4. Otherwise:
   - Stop.
   - Scan left.
   - Scan right.
   - Compare distances.
   - Turn toward the larger free space.
   - Continue forward.

### Characteristics

- Reactive navigation
- Fixed speed
- Fixed turning delay

### Outcome

First fully autonomous obstacle-avoiding robot.

---

# Version 3 – Smarter Navigation ✅

## Improvements

- Smooth servo scanning
- Averaged ultrasonic measurements
- Distance filtering
- Adaptive turning
- Reduced false detections
- Reduced aggressive turns
- Improved navigation stability

### Characteristics

- More reliable obstacle detection
- Better turning decisions
- Smoother movement

### Outcome

Significantly improved autonomous navigation.

---

# Version 4 – Adaptive Autonomous Navigation 🚧

## Objective

Replace simple obstacle reactions with intelligent navigation behaviour.

### Planned Software Modules

### Sensor Manager

Responsibilities:

- Read ultrasonic sensor
- Filter noisy measurements
- Control servo scanning

---

### Environment Analyzer

Responsibilities:

- Measure available free space
- Estimate navigation risk
- Detect narrow passages

---

### Decision Engine

Responsibilities:

- Select movement direction
- Determine driving behaviour
- Decide when to slow down
- Handle blocked paths

---

### Motion Controller

Responsibilities:

- Smooth acceleration
- Smooth braking
- Adaptive speed control
- Smooth turning

---

# Overall Decision Flow

```text
Move Forward

↓

Measure Distance

↓

Filter Sensor Data

↓

Analyze Environment

↓

Safe?

├── Yes → Continue Forward
│
└── No
      ↓
 Scan Left & Right
      ↓
Compare Free Space
      ↓
Choose Best Direction
      ↓
Turn Smoothly
      ↓
Continue Navigation
```

---

# Future Algorithm Improvements

- Dynamic safety distance
- Adaptive speed control
- Environment-aware navigation
- Wall following
- Dead-end recovery
- Maze solving
- Sensor fusion
- Camera-based navigation
- AI-assisted navigation

---

# Simplified Pseudocode

```text
loop

    readSensors()

    analyzeEnvironment()

    decision = chooseMovement()

    executeMovement(decision)

end loop
```

---

# Implementation Status

## Version 1

- [x] Basic motion control

## Version 2

- [x] Autonomous obstacle avoidance

## Version 3

- [x] Smarter navigation

## Version 4

- [ ] Motion Controller
- [ ] Sensor Manager
- [ ] Environment Analyzer
- [ ] Decision Engine
- [ ] Adaptive speed control
- [ ] Navigation optimization
