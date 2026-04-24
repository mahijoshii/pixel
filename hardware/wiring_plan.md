# 🔌 Wiring Plan — Pixel

This document defines all electrical connections for the STM32 robot.

---

## 🧠 STM32 ↔ Motor Driver (L298N)

| STM32 Pin | L298N Pin | Purpose |
|----------|-----------|--------|
| D5 (PWM) | ENA | Left motor speed |
| D6 (PWM) | ENB | Right motor speed |
| D7 | IN1 | Left motor direction |
| D8 | IN2 | Left motor direction |
| D9 | IN3 | Right motor direction |
| D10 | IN4 | Right motor direction |
| GND | GND | Common ground |

---

## 🚗 Motor Connections

| L298N Pin | Component |
|----------|----------|
| OUT1 | Left motor terminal |
| OUT2 | Left motor terminal |
| OUT3 | Right motor terminal |
| OUT4 | Right motor terminal |

---

## 📡 Ultrasonic Sensor (HC-SR04)

| STM32 Pin | Sensor Pin | Notes |
|----------|------------|------|
| D2 | TRIG | Output signal |
| D3 | ECHO | Must use voltage divider |
| 5V | VCC | Power |
| GND | GND | Common ground |

---

## 🔋 Power Connections

| Source | Destination | Notes |
|-------|------------|------|
| Battery + | L298N VIN | Motor power |
| Battery - | L298N GND | Ground |
| L298N GND | STM32 GND | Shared ground |
| STM32 USB | STM32 | Logic power |

---

## ⚠️ Important Notes

- Do NOT power motors from STM32
- Ensure ALL grounds are connected
- Use voltage divider for ECHO pin (5V → 3.3V)