# 📚 Lessons Learned

This file records important technical and project-management lessons learned while developing the Obstacle Avoiding Robot.

---

## 📅 2026-06-20

### GitHub

- GitHub cannot create empty folders.
- Folders only exist after at least one file is added.
- Well-organized repositories are easier for others to understand and contribute to.

### Project Planning

- Planning the repository structure before writing code saves time later.
- Breaking a project into documentation, hardware, and software sections improves maintainability.

### Documentation

- Good documentation is as important as good code.
- A README should explain the project clearly to someone with no prior knowledge.

### Next Improvements

- [ ] Add project photos
- [ ] Upload wiring diagram
- [ ] Add Arduino source code
- [ ] Record demonstration video
- [ ] Improve README with system architecture

## 📅 2026-06-25

### Arduino Programming

- Learned how variables store and update data during program execution.
- Understood how `if` statements allow the robot to make decisions based on sensor input.
- Learned the purpose of the `setup()` function for initialization tasks.
- Learned the purpose of the `loop()` function for continuous execution.
- Used `Serial.begin()` and `Serial.print()` to display debugging information in the Serial Monitor.

### Key Takeaway

Even a simple obstacle-avoiding robot requires programming concepts such as variables, conditional logic, and continuous control loops.

## 📅 2026-06-27

### Arduino

- Learned how PWM controls motor speed.
- Understood why motor drivers are required instead of powering motors directly.

### Debugging

- One motor rotated in the opposite direction because the wiring polarity was reversed.
- Used Serial Monitor to identify incorrect sensor readings.

### Robotics

- Ultrasonic sensors can produce unstable readings at sharp angles.
- Taking multiple measurements and averaging them improves reliability.

### Next Improvements

- [ ] Implement smoother turning algorithm
- [ ] Reduce obstacle detection delay
