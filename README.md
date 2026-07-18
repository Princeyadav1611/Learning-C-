# 🚀 Learning C Programming (BCA Journey)

Welcome to my repository! This is the place where I document my complete journey of learning **C Programming** from scratch as a BCA student. 

The main goal of this repository is to build a solid foundation in programming logic, syntax, and problem-solving, while also mastering local environment setups (VS Code + GCC Compiler) and version control with GitHub.

---

## 🛠️ Tech Stack & Environment
* **Language:** C (Pure Standard C, using `#include <stdio.h>`)
* **Code Editor:** Visual Studio Code (VS Code)
* **Compiler:** GCC (MinGW-w64)
* **Execution:** Local terminal compilation & Code Runner

---

## 📁 What's Inside This Repository?
Here is a quick look at the logic and programs I have written and tested locally so far:

* 🟢 **`hello.c`** - The ultimate hello world test program.
* 🟢 **`variables.c` & `input.c`** - Learning about data types, printf, and handling user input using `scanf`.
* 🟢 **`sum.c`** - Basic arithmetic operations.
* 🟢 **`circle_area.c` & `sqaure_area.c`** - Geometry-based logic implementation.
* 🟢 **`divby2.c`** - Logic building using Modulo Operator (`%`) and `if-else` conditionals to check divisibility.
* 🟢 ** and many more

---

## 🎯 My Goals
1. Master core programming concepts (Loops, Functions, Arrays, and Pointers).
2. Write clean, pure C code that runs smoothly on any local setup.
3. Keep updating this repository with every new topic I learn!

*Happy Coding! 🚀*


## 🎮 Featured Project: Bulletproof Multiplier Game

A crash-proof CLI game built in C that validates inputs, protects itself from character crashes, and features an adaptive reward system.

### 📜 Quick Game Rules
* 🎯 **Goal:** Always enter an **ODD** number.
* 🚪 **Exit:** Enter **`0`** anytime to safely quit.
* ⛔ **Even Number Penalty:** Costs 1 Life (Total: 3). Correct odd input gives +1 life back.
* 🚨 **Non-Integer Penalty (abc/xyz):** Costs 1 Security Token (Total: 5). Permanent loss, no recovery!

### ⚙️ How to Run
```bash
gcc bulletproofmultiplier.c -o game
./game
