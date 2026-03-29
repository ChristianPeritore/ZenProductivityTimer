# ⏳ Zen Focus Timer: Professional Edition

A high-performance productivity tool designed to manage focus sessions directly from your terminal. This repository features two distinct implementations: a **compiled C++ version** for speed and a **Python script** for cross-platform flexibility.

---

# 🍴 Features

* **Custom Duration** — Set any focus goal between 1 and 1440 minutes.
* **Live UI** — Real-time updates on a single terminal line using carriage return (`\r`) logic.
* **Smart Formatting** — Automatically switches between `HH:MM:SS` and `MM:SS` formats.
* **Visual Alerts** — Dynamic "Final Minute" warning and "Session Complete" notifications.
* **Robust Logic** — Built-in input validation to handle non-numeric or out-of-range values.

---

# 🚀 Getting Started

### Requirements
* **C++ Version:** A compiler supporting C++11 or later (`g++`, `clang++`, or `MSVC`).
* **Python Version:** Python 3.6 or higher.

---

## 🛠️ Compilation & Usage (C++)

Ideal for a permanent, standalone executable on your system.

### 1. Compile
Open your Command Prompt (CMD) or Terminal and run:
```bash
g++ -std=c++17 -o FocusTimer timer.cpp
2. Run
FocusTimer
In-App Controls:

P — Pause / Resume the countdown.

R — Reset the timer to the starting value.

Q — Quit and close the application.

🐍 Script Execution (Python)
Ideal for rapid use without the need for compilation.

1. Run Directly
python timer.py
In-App Controls:

Ctrl + C — Safely stop the timer and exit.

⌨️ User Guide
Launch the program using one of the methods above.

Input the number of minutes you wish to focus (e.g., 25, 60, 90).

Press Enter to start the countdown.

Stay Focused while the timer updates live in your terminal.
