# ⏳ Zen Focus Timer: Professional Edition

<p align="center">
  <img src="https://img.shields.io/badge/C%2B%2B-17-blue?style=for-the-badge&logo=c%2B%2B" alt="C++17" />
  <img src="https://img.shields.io/badge/Python-3.8+-yellow?style=for-the-badge&logo=python" alt="Python 3" />
  <img src="https://img.shields.io/badge/Platform-Cross--Platform-lightgrey?style=for-the-badge" alt="Platform" />
  <img src="https://img.shields.io/badge/License-MIT-green?style=for-the-badge" alt="License" />
</p>

---

### 📖 Descrizione
**Zen Focus Timer** è uno strumento di produttività ad alte prestazioni progettato per gestire sessioni di concentrazione direttamente dal terminale. Il repository include due implementazioni distinte per adattarsi a ogni esigenza:
* **Versione C++:** Compilata per la massima velocità e un basso consumo di risorse.
* **Script Python:** Ideale per una flessibilità immediata e cross-platform.

---

## 🌟 Features

* **🎯 Custom Duration** — Imposta obiettivi di focus personalizzati (da 1 a 1440 minuti).
* **⏱️ Live UI** — Aggiornamenti in tempo reale su riga singola tramite logica di *carriage return* (`\r`).
* **🧠 Smart Formatting** — Switch automatico tra i formati `HH:MM:SS` e `MM:SS`.
* **⚠️ Visual Alerts** — Avvisi dinamici per l'"Ultimo Minuto" e notifiche di "Sessione Completata".
* **🛡️ Robust Logic** — Validazione degli input per gestire valori non numerici o fuori intervallo.

---

## 🚀 Getting Started

### Prerequisites
* **C++:** Un compilatore compatibile con C++11 o superiore (`g++`, `clang++`, o `MSVC`).
* **Python:** Versione 3.6 o superiore.

---

## 🛠️ Installation & Usage

### 🔹 Option A: C++ (Compiled Executable)
*Ideale come strumento standalone permanente sul sistema.*

1.  **Compilazione:**
    Apri il terminale e digita:
    ```bash
    g++ -std=c++17 -O3 -o FocusTimer timer.cpp
    ```
2.  **Esecuzione:**
    ```bash
    ./FocusTimer
    ```
> **Controls:** `P` (Pause/Resume) | `R` (Reset) | `Q` (Quit)

### 🔹 Option B: Python (Script)
*Ideale per un utilizzo rapido senza necessità di compilazione.*

1.  **Esecuzione:**
    ```bash
    python timer.py
    ```
> **Controls:** `Ctrl + C` (Safe Exit)

---

## ⌨️ User Guide

1.  **Avvia** il programma scegliendo uno dei metodi sopra indicati.
2.  **Inserisci** il numero di minuti desiderati (es. `25`, `60`, `90`).
3.  **Premi Invio** per far partire il countdown.
4.  **Stay Focused!** Monitora il tempo rimanente live nel terminale.

---

## 📸 Preview

<p align="center">
  <img width="600" alt="Zen Focus Timer Preview" src="https://github.com/user-attachments/assets/693c8526-f41b-42eb-8793-7199bf85107d" />
</p>

---

## 📂 Project Structure
```text
├── timer.cpp    # Sorgente implementazione C++
├── timer.py     # Sorgente implementazione Python
└── README.md    # Documentazione del progetto
