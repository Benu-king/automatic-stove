
---

# 🔊 Voice-Controlled Stove System

### Powered by **Arduino + Python + Speech Recognition**

**Developer:** Benayas Wondwosen

---

## 📌 Overview

This project allows you to **control a stove (relay)** using **voice commands** in **Amharic or English**.
The Python script listens for voice input, interprets the command, and sends `"on"` or `"off"` to an Arduino using serial communication.

Perfect for:

* Smart home systems
* Safety automation
* IoT projects
* Hands-free control

---

## 🧩 Features

✔️ Voice recognition (Amharic + English)
✔️ Real-time control of Arduino relay
✔️ AI voice responses using gTTS
✔️ Automatic noise adjustment
✔️ Simple and reliable serial communication

---

## 🛠 Requirements

### **Hardware**

* Arduino (UNO/Nano/Mega)
* Relay module
* Laptop/PC
* Microphone
* USB cable

### **Python Libraries**

Install these with pip:

```
pip install SpeechRecognition
pip install gTTS
pip install pyglet
pip install pyserial
pip install pyaudio
```

---

## 🔌 Arduino Code

The Arduino listens for commands via Serial:

* `"on"` → Relay HIGH + LED blink
* `"off"` → Relay LOW

Upload the provided `.ino` file to your Arduino.

---

## 🗣 Voice Commands

### **Amharic**

* "አብሪ"
* "ስቶቩን አብሬ"
* "አጥፊ"
* "አጥፊው"

### **English**

* "turn on"
* "switch on"
* "turn off"
* "stove on"
* "stove off"

---

## 📡 How It Works

1. Python listens through microphone
2. Converts speech → text using Google Speech Recognition
3. Matches the text to known on/off triggers
4. Sends `"on\n"` or `"off\n"` to Arduino
5. Arduino performs the action
6. Python responds with gTTS voice feedback

---

## ▶️ Running the Program

1. Connect Arduino → PC
2. Upload Arduino code
3. Update COM port in Python:

   ```python
   arduino = serial.Serial('COM9', 9600)
   ```
4. Run the Python script:

   ```
   python voice_control.py
   ```
5. Speak your command

---

## 🎤 Example Output

```
ተናገር...
Asitawelal: turn on
💡 stove ON
```

---

# 📜 **License — MIT License**

```
MIT License

Copyright (c) 2025 Benayas Wondwosen

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software...

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND.
```

---

# ⭐ **If You Use This Project**

Please give credit to **Benayas Wondwosen**
and star the GitHub repository.
This project is open source. You are free to modify and use it for personal or educational purposes.


---
