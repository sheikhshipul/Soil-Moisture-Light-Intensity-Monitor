# Soil-Moisture-Light-Intensity-Monitor

```md
# Soil Moisture & Light Intensity Monitor (LCD Display)

An Arduino-based monitoring system that measures soil moisture and light intensity, displaying values on a 16x2 LCD.

---

## Project Description

This project reads two analog sensors:

- Soil Moisture Sensor → A0
- Light Intensity Sensor → A2

Sensor readings are shown in real time on a *16x2 LCD display*.

Designed for:

- Smart agriculture projects
- Environmental monitoring
- Embedded systems learning
- Sensor calibration experiments

---

## Features

✔ Real-time monitoring  
✔ LCD display output  
✔ Low hardware complexity  
✔ Easy to expand  
✔ Suitable for beginners  

---

## System Behavior

The Arduino:

1. Reads moisture level (A0)
2. Reads light intensity (A2)
3. Applies scaling formulas
4. Updates LCD every second

---

## Hardware Requirements

- Arduino UNO / Nano / compatible board
- Soil Moisture Sensor (Analog Output)
- Light Sensor (LDR / Analog Intensity Sensor)
- 16x2 LCD (HD44780 compatible)
- 10k Potentiometer (LCD contrast)
- Jumper wires

---

## Pin Configuration

### LCD → Arduino

Configured in sketch:

```cpp
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
