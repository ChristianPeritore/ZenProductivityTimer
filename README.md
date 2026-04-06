Gemini ha detto
⏳ Zen Focus Timer: Professional Edition
<p align="center">
<img src="https://img.shields.io/badge/C%2B%2B-17-blue?style=for-the-badge&logo=c%2B%2B" alt="C++17" />
<img src="https://img.shields.io/badge/Python-3.8+-yellow?style=for-the-badge&logo=python" alt="Python 3" />
<img src="https://img.shields.io/badge/Platform-Cross--Platform-lightgrey?style=for-the-badge" alt="Platform" />
<img src="https://img.shields.io/badge/License-MIT-green?style=for-the-badge" alt="License" />
</p>

A high-performance productivity tool designed to manage focus sessions directly from your terminal. This repository features two distinct implementations: a compiled C++ version for maximum performance and a Python script for cross-platform flexibility.

🌟 Features
🎯 Custom Duration — Set any focus goal between 1 and 1440 minutes.

⏱️ Live UI — Real-time updates on a single terminal line using carriage return (\r) logic.

🧠 Smart Formatting — Automatically switches between HH:MM:SS and MM:SS formats.

⚠️ Visual Alerts — Dynamic "Final Minute" warnings and "Session Complete" notifications.

🛡️ Robust Logic — Built-in input validation to handle non-numeric or out-of-range values.

🚀 Getting Started
Prerequisites
C++ Version: A compiler supporting C++11 or later (g++, clang++, or MSVC).

Python Version: Python 3.6 or higher.

🛠️ Installation & Usage
Option A: C++ (Compiled Executable)
Best for a permanent, standalone tool on your system.

Compile:
Open your terminal and run:

Bash
g++ -std=c++17 -O3 -o FocusTimer timer.cpp
Run:

Bash
./FocusTimer
Controls: P (Pause/Resume) | R (Reset) | Q (Quit)

Option B: Python (Script)
Best for rapid use without compilation.

Run Directly:

Bash
python timer.py
Controls: Ctrl + C (Safe Exit)

⌨️ User Guide
Launch the program using one of the methods above.

Input the number of minutes you wish to focus (e.g., 25, 60, 90).

Press Enter to start the countdown.

Stay Focused while the timer updates live in your terminal.

📸 Preview
<p align="center">
<img width="600" alt="Zen Focus Timer Preview" src="https://github.com/user-attachments/assets/693c8526-f41b-42eb-8793-7199bf85107d" />
</p>

📈 Developer Stats
<p align="center">
<img height="180em" src="https://github-readme-stats-eight-theta.vercel.app/api?username=ChristianPeritore&show_icons=true&theme=tokyonight&include_all_commits=true&count_private=true" />
<img height="180em" src="https://github-readme-stats-eight-theta.vercel.app/api/top-langs/?username=ChristianPeritore&layout=compact&theme=tokyonight" />
</p>

📂 Project Structure
├── timer.cpp    # C++ Implementation Source
├── timer.py     # Python Implementation Source
└── README.md    # Documentation
📄 License
This project is licensed under the MIT License - see the LICENSE file for details.

Developed by Christian Peritore
