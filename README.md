# ⏳ Zen Focus Timer: Professional Edition

<p align="center">
  <img src="https://img.shields.io/badge/C%2B%2B-17-blue?style=for-the-badge&logo=c%2B%2B" alt="C++17" />
  <img src="https://img.shields.io/badge/Python-3.8+-yellow?style=for-the-badge&logo=python" alt="Python 3" />
  <img src="https://img.shields.io/badge/Platform-Cross--Platform-lightgrey?style=for-the-badge" alt="Platform" />
  <img src="https://img.shields.io/badge/License-MIT-green?style=for-the-badge" alt="License" />
</p>

A high-performance productivity tool designed to manage focus sessions directly from your terminal. This repository features two distinct implementations: a **compiled C++ version** for maximum performance and a **Python script** for cross-platform flexibility.

---

## 🌟 Features

* **🎯 Custom Duration** — Set any focus goal between 1 and 1440 minutes.
* **⏱️ Live UI** — Real-time updates on a single terminal line using carriage return (`\r`) logic.
* **🧠 Smart Formatting** — Automatically switches between `HH:MM:SS` and `MM:SS` formats.
* **⚠️ Visual Alerts** — Dynamic "Final Minute" warnings and "Session Complete" notifications.
* **🛡️ Robust Logic** — Built-in input validation to handle non-numeric or out-of-range values.

---

## 🚀 Getting Started

### Prerequisites
* **C++ Version:** A compiler supporting C++11 or later (`g++`, `clang++`, or `MSVC`).
* **Python Version:** Python 3.6 or higher.

---

## 🛠️ Installation & Usage

### Option A: C++ (Compiled Executable)
*Best for a permanent, standalone tool on your system.*

1. **Compile:**
   Open your terminal and run:
   ```bash
   g++ -std=c++17 -O3 -o FocusTimer timer.cpp
