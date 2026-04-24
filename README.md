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
Ultrasonic Sensor → STM32 Nucleo-F401RE → L298N Motor Driver → Motors
                                          ↑
                                       Battery
```text

---

## ⚙️ Key Features

- Modular firmware design (`motors`, `ultrasonic`, control loop)
- PWM-based motor speed control using STM32 timers
- Real-time distance measurement with ultrasonic sensing
- Autonomous obstacle avoidance behavior
- Clean separation between hardware and software components

---

## 🧰 Hardware

- STM32 Nucleo-F401RE
- HC-SR04 ultrasonic sensor
- L298N motor driver
- 2× DC gear motors + wheels
- External battery pack
- Breadboard and jumper wires
- Chassis (or custom base)

---

## 💻 Software

- STM32CubeIDE (HAL-based development)
- Embedded C
- Timer peripherals for PWM generation
- GPIO and timing logic for sensor interfacing

---
```md
## 📂 Repository Structure

```text
pixel/
├── docs/              # system design and documentation
├── firmware/          # STM32 firmware (in progress)
├── hardware/          # wiring diagrams (in progress)
├── BOM.xlsx           # bill of materials
└── README.md


---

## 📚 Documentation

- System Design: `docs/system_design.md`
- BOM (Bill of Materials): `BOM.xlsx`

---

## 🏁 Status

🟡 Planning & system design  
⬜ Hardware assembly  
⬜ Firmware implementation  
⬜ Integration & testing  

---

## 🔧 Next Steps

- finalize hardware wiring and power setup  
- implement PWM motor control  
- implement ultrasonic distance measurement  
- integrate real-time control loop  

---

## 🎯 Why this project matters

This project demonstrates:
- embedded systems development using STM32
- real-time control loop design
- sensor → decision → actuation pipelines
- hardware/software integration and debugging

---

## 🧠 Future Improvements

- PID control for smoother navigation  
- wheel encoders for closed-loop control  
- Bluetooth or wireless control interface  
- multi-sensor fusion  

---

## 👤 Author
Built by Mahi Joshi