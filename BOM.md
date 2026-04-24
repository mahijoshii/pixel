# 🧾 Bill of Materials (BOM)

This document lists all hardware components required to build **Pixel**, an STM32-based autonomous robot.

---

## 🧠 Core Components

| Component | Quantity | Description | Status |
|----------|----------|-------------|--------|
| STM32 Nucleo-F401RE | 1 | Microcontroller development board | ✅ Owned |

---

## 🚗 Motion System

| Component | Quantity | Description | Status |
|----------|----------|-------------|--------|
| DC Gear Motors | 2 | Drive motors for differential movement | ⬜ To Buy |
| Wheels | 2 | Attach to motors for movement | ⬜ To Buy |
| Caster Wheel | 1 | Provides balance and support | ⬜ To Buy |

---

## 🔥 Motor Control

| Component | Quantity | Description | Status |
|----------|----------|-------------|--------|
| L298N Motor Driver | 1 | Controls motor direction and speed via PWM | ⬜ To Buy |

---

## 📡 Sensors

| Component | Quantity | Description | Status |
|----------|----------|-------------|--------|
| HC-SR04 Ultrasonic Sensor | 1 | Measures distance to obstacles | ⬜ To Buy |

---

## 🔋 Power System

| Component | Quantity | Description | Status |
|----------|----------|-------------|--------|
| Battery Pack (4x AA or Li-ion) | 1 | Powers motors via driver | ⬜ To Buy |
| Batteries | 4+ | Power source for robot | ⬜ To Buy |

---

## 🔌 Prototyping & Wiring

| Component | Quantity | Description | Status |
|----------|----------|-------------|--------|
| Breadboard | 1 | Circuit prototyping | ✅ Owned |
| Jumper Wires | ~20 | Electrical connections | ✅ Owned |
| Resistors | few | Used for voltage divider (echo pin) | ✅ Owned |

---

## 🧱 Structure

| Component | Quantity | Description | Status |
|----------|----------|-------------|--------|
| Chassis / Base | 1 | Physical structure (DIY or kit) | ⬜ To Build |

---

## ⚠️ Notes

- STM32 operates at **3.3V logic**, while HC-SR04 outputs **5V** → requires voltage divider on ECHO pin  
- Motors must be powered through the **L298N driver**, not directly from STM32  
- All components must share a **common ground**

---

## 📦 Estimated Cost

| Category | Estimated Cost |
|---------|---------------|
| Motors + Wheels | $10–15 |
| Motor Driver | $5–10 |
| Sensor | $3–5 |
| Battery + Power | $5–10 |
| Misc Components | $5–10 |
| **Total** | **~$25–40** |

---

## 📌 Status Summary

- ✅ Core platform ready (STM32)
- 🟡 Parts selection in progress
- ⬜ Hardware assembly pending