# 📚 Lessons Learned

This file records important technical, engineering, and project-management lessons learned while developing **Jarvis Rover**.

---

# 📅 2026-06-20

## GitHub

- GitHub cannot create empty folders.
- Folders only exist after at least one file is added.
- Well-organized repositories are easier to maintain and understand.
- Clear documentation is essential for long-term projects.

## Project Planning

- Planning the repository structure before writing code saves time later.
- Separating documentation, hardware, software, and code improves project organization.

## Documentation

- Good documentation is as important as good code.
- A README should clearly explain the project to new visitors.
- Recording development decisions makes future improvements easier.

---

# 📅 2026-06-25

## Arduino Programming

- Learned how variables store and update data.
- Understood how `if` statements allow robots to make decisions.
- Learned the purpose of `setup()` and `loop()`.
- Used `Serial.begin()` and `Serial.print()` for debugging.

## Key Takeaway

Even a simple robot requires continuous decision-making through programming logic.

---

# 📅 2026-06-27

## Arduino

- Learned how PWM controls motor speed.
- Understood why motor drivers are required instead of powering motors directly.

## Debugging

- Motor direction depends on wiring polarity.
- The Serial Monitor is one of the most useful debugging tools.

## Robotics

- Ultrasonic sensors can produce unstable readings.
- Averaging multiple distance measurements improves reliability.

---

# 📅 2026-07-03

## Embedded Systems

- Hardware problems are not always caused by faulty components; software configuration can also affect hardware behavior.
- Arduino timers are shared resources that can be used by different peripherals and libraries.
- Understanding hardware timers is important when combining PWM outputs and Servo control.

## Hardware Integration

- The TB6612FNG motor driver is more efficient than the L298N for battery-powered robots.
- Supplying stable power significantly improves robot performance.
- Arduino and the motor driver must share a common ground.

## Debugging

- Always test hardware with the simplest possible program before changing wiring.
- Isolating one subsystem at a time makes troubleshooting much faster.
- Never assume the hardware is faulty before verifying the software.

## Robotics

- Obstacle avoidance depends on both sensing and motion control.
- Sudden acceleration often causes unnecessary collisions.
- Smoother steering improves navigation more than simply reducing speed.
- Filtering noisy sensor data produces more reliable robot behavior.

## Software Engineering

- Small, incremental improvements are easier to debug than large changes.
- Modular software is easier to maintain and extend.
- Building reusable functions reduces future development effort.

## Engineering Mindset

- A robot should not simply react to obstacles.
- It should continuously observe its surroundings, estimate risk, and adjust its movement accordingly.
- Good engineering focuses on solving root causes instead of only fixing symptoms.

## Project Development

- Documentation should evolve alongside the code.
- Recording both successful solutions and failed attempts helps future development.
- Every completed version provides a stronger foundation for the next version.

---

# 🚀 Next Learning Goals

- [ ] Build the Motion Controller
- [ ] Learn adaptive speed control
- [ ] Design the Environment Analyzer
- [ ] Implement the Decision Engine
- [ ] Improve software modularity
- [ ] Learn sensor fusion
- [ ] Explore computer vision
- [ ] Study AI-assisted robotics
