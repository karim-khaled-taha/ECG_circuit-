# Electrocardiography (ECG) Project (Team work) 


---

## Overview

This project implements an Electrocardiography (ECG) system to record and monitor the electrical activity of the heart using electrodes placed on the limbs. The recorded signals are processed through instrumentation amplifiers and various filters to produce a clear ECG signal for analysis.

### Project Features:
- **Instrumentation Amplifier**: AD620 for high accuracy with CMRR of 100dB.
- **Filters**: High-pass, low-pass, and notch filters to eliminate noise and baseline wander.
- **Gain Stage**: Boosts weak signals generated by the heart.
- **Lead Selector**: Provides a 12-lead ECG system for comprehensive monitoring.
- **Driven-Right-Leg Circuit**: Reduces interference by canceling common-mode noise.

---

## Circuit Design

[Circuit Diagram]![Screenshot 2024-09-19 233545](https://github.com/user-attachments/assets/7ae1cf6b-abb1-4a7e-a2c9-084bf38e674d)

### Components Used:
- Electrodes (Dry surface electrodes)
- AD620 Instrumentation Amplifier
- High-pass, Low-pass, and Notch Filters
- Non-inverting amplifier
- Multiplexer for lead selection
- Microcontroller for control of wave (Arduino)

### Filters Specifications:
- **High-Pass Filter**: 0.05 Hz cutoff, 3rd order (2 active, 1 passive)
- **Low-Pass Filter**: 150 Hz cutoff, 6th order (4 active, 2 passive)
- **Notch Filter**: 50/60 Hz for power line interference

---

## Output
### ECG Output
(![Screenshot 2024-05-03 212028](https://github.com/user-attachments/assets/243a8f9d-d621-4d93-aad8-dc2f03d408dc))

The output (Green wave) shows a clear ECG signal with visible P waves, QRS complexes, and T waves, which are crucial for diagnosing various heart conditions.

