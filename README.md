# 🤖 Pixel — STM32 Autonomous Robot

Pixel is a real-time embedded robotics project built on the STM32 Nucleo-F401RE.  
It autonomously navigates its environment using ultrasonic sensing and PWM-based motor control.

---

## 🚀 Overview

This project implements a differential-drive robot that:
- detects obstacles using an ultrasonic sensor (HC-SR04)
- processes sensor data on an STM32 microcontroller
- generates real-time PWM signals to control motor speed
- executes autonomous navigation logic

The goal is to demonstrate **embedded systems design, real-time control, and hardware-software integration**.

---

## 🧠 System Architecture

```text
Ultrasonic Sensor ──> STM32 Nucleo-F401RE ──> L298N Motor Driver ──> Motors
                                  │
                                  └── External Battery Power
```

---

## ⚙️ Key Features

- Modular firmware design (`motors`, `ultrasonic`, control loop)
- PWM-based motor speed control using STM32 timers
- Real-time distance measurement with ultrasonic sensing
- Autonomous obstacle avoidance behavior
- Clean separation between hardware and software components
- LCD-based debugging interface for real-time system feedback

---

## 🧰 Hardware

- STM32 Nucleo-F401RE
- HC-SR04 ultrasonic sensor
- L298N motor driver
- 2× DC gear motors + wheels
- External battery pack
- Breadboard and jumper wires
- 16×2 LCD display (parallel interface)
- Potentiometer (contrast control)
- Chassis or custom base

---

## 💻 Software

- STM32CubeIDE (HAL-based development)
- Arduino IDE (for rapid prototyping and hardware validation)
- Embedded C
- Timer peripherals for PWM generation
- GPIO and timing logic for sensor interfacing

---

## 📂 Repository Structure

```text
pixel/
├── docs/        # system design and documentation
├── firmware/    # STM32 firmware
├── hardware/    # wiring diagrams and hardware notes
├── BOM.xlsx     # bill of materials
└── README.md
```

---

## 📚 Documentation

- System Design: `docs/system_design.md`
- Wiring Plan: `hardware/wiring_plan.md`
- BOM: `BOM.xlsx`

---

## Latest Progress
- ✅ Successfully interfaced 16×2 LCD with STM32 using parallel communication
- ✅ Implemented real-time display output ("Hello Pixel")
- ✅ Verified GPIO control and hardware wiring
- 🔄 Transitioning from prototyping (Arduino) to STM32 HAL-based firmware

## 🏁 Status

- ✅ Planning and system design
- 🟡 Hardware bring-up (in progress)
- ⬜ Motor control implementation
- ⬜ Sensor integration (ultrasonic)
- ⬜ Full system integration

---

## 🔧 Next Steps

- integrate L298N motor driver and test PWM motor control
- implement ultrasonic distance measurement
- integrate LCD as debugging interface (distance + state display)
- build full obstacle avoidance control loop
---

## 🎯 Why this project matters

This project demonstrates:
- embedded systems development using STM32
- real-time control loop design
- sensor-to-decision-to-actuation pipelines
- hardware/software integration and debugging
- low-level hardware interfacing (parallel LCD, GPIO timing)

---

## 🧠 Future Improvements

- PID control for smoother navigation
- wheel encoders for closed-loop control
- Bluetooth or wireless control interface
- multi-sensor fusion

---

## 👤 Author

Built by Mahi Joshi