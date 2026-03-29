# 🚀 Zen Productivity Suite: CLI Edition

Welcome to the **Zen Productivity Suite**. This repository hosts a collection of high-performance terminal tools designed for students and professionals. It includes a **Scientific Calculator** and a **Focus Timer**, both available in **C++** and **Python**.

---

# 🍴 Key Features

* **Scientific Calculator** — Advanced trigonometry (DEG/RAD), base conversions (HEX/BIN/DEC), and n-th root calculations.
* **Focus Timer** — A professional Pomodoro-style timer with live updates, pause/resume logic, and visual alerts.
* **Cross-Language Support** — Optimized source code for both **C++17** and **Python 3.x**.
* **Input Validation** — Robust error handling to prevent crashes from division by zero or invalid time ranges.
* **Clean UX** — Minimalist terminal interface using carriage return (`\r`) logic for a distraction-free experience.

---

# 📦 Getting Started

### Requirements
* **C++:** A compiler like `g++` (MinGW for Windows, Clang for Mac, or GCC for Linux).
* **Python:** Python 3.6 or higher installed.

---

## 🛠️ Tool 1: Scientific Calculator

### 🔹 C++ Version (Compiled)
**Compile:**
```bash
g++ -std=c++17 -o calculator main_calc.cpp
Run:

./calculator
Commands: sin, cos, log, base (for HEX/BIN), mode (DEG/RAD toggle), exit.

⏳ Tool 2: Focus Timer
🔹 C++ Version (Compiled)
Compile:

g++ -std=c++17 -o timer timer.cpp
Run:

./timer
Controls: P (Pause), R (Reset), Q (Quit).

🔹 Python Version (Script)
Run directly:

Bash
python timer.py
Controls: Ctrl + C to stop the session.

⌨️ General Interaction Guide
All tools in this suite follow a Command-First logic:

Launch the desired executable or script.

Input the command (e.g., sin or the number of minutes).

Execute by pressing Enter.

Follow the on-screen status updates.

⚠️ System Notes & Pro Tips
Environment Variables: For C++, ensure your compiler's bin folder is added to your System Path.

Case Sensitivity: Commands are case-insensitive (e.g., SIN works the same as sin).

Precision: Mathematical results are displayed with 6 decimal places for scientific accuracy.

Zen Mode: Both tools clear the terminal screen upon launch to minimize distractions.
