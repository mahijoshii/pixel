# STM32 Autonomous Obstacle-Avoidance Robot – System Design

## 1. Project Overview

This project implements a small autonomous mobile robot using an STM32 Nucleo-F401RE.  
The robot will move forward, detect obstacles using an ultrasonic distance sensor, and react by stopping, backing up, and turning to avoid collisions.

The main goal is to build a clean embedded systems project that demonstrates:
- sensor interfacing
- PWM motor control
- real-time control logic
- modular firmware design

## 2. Project Goals

### Functional goals
- drive two DC motors independently
- measure forward distance using an ultrasonic sensor
- move forward when the path is clear
- stop and turn when an obstacle is detected

### Technical goals
- use STM32CubeIDE for firmware development
- use PWM for motor speed control
- separate firmware into reusable modules
- maintain a clear hardware and software architecture

## 3. System Architecture
The system is composed of four main subsystems:

- Sensor subsystem (distance measurement)
- Control subsystem (STM32 microcontroller)
- Actuation subsystem (motor driver + motors)
- Power subsystem (battery + supply)

### Block Diagram
[Sensor] → [STM32] → [Motor Driver] → [Motors]
                    ↑
                 [Power]

## 4. Hardware Components

| Component                 | Quantity  | Purpose |
|----------                 |---------- |---------|
| STM32 Nucleo-F401RE       | 1         | Main microcontroller |
| HC-SR04 ultrasonic sensor | 1         | Distance sensing |
| L298N motor driver        | 1         | Motor control interface |
| DC motors                 | 2         | Robot movement |
| Wheels                    | 2         | Mobility |
| Caster wheel              | 1         | Balance |
| Battery pack              | 1         | Power for motors |
| Breadboard                | 1         | Prototyping |
| Jumper wires              | several   | Connections |
| Chassis / base            | 1         | Mounting structure |

## 5. Initial Pin Mapping

| Function | STM32 Pin | Connected To |
|---------|-----------|-------------|
| Left motor PWM | D5 | ENA (L298N) |
| Right motor PWM | D6 | ENB (L298N) |
| Left motor dir 1 | D7 | IN1 |
| Left motor dir 2 | D8 | IN2 |
| Right motor dir 1 | D9 | IN3 |
| Right motor dir 2 | D10 | IN4 |
| Ultrasonic TRIG | D2 | TRIG |
| Ultrasonic ECHO | D3 | ECHO (via voltage divider) |

**Note: This mapping is subject to change during implementation.

## 6. Power Design

- STM32 will be powered via USB during development
- Motors will be powered using an external battery pack
- L298N motor driver will interface between STM32 and motors
- All components will share a common ground

** Important:
- Motors must NOT be powered from the STM32 board
- The HC-SR04 ECHO pin must be level-shifted from 5V to 3.3V

## 7. Software Architecture

The firmware will be divided into the following modules:

- motors.c → controls motor direction and speed (PWM)
- ultrasonic.c → handles distance measurement
- main.c → implements control logic and system loop

**Note: This software design is subject ot change during implementation.

## 8. Control Logic
(very basic for now)
Basic obstacle avoidance behavior:

loop:
    distance = read_sensor()

    if distance > threshold:
        move_forward()
    else:
        stop()
        reverse()
        turn()

