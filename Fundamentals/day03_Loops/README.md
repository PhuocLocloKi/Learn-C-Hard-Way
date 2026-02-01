# 🔁 C Programming – Loop Statements (for / while / do-while)

---

## 📌 Overview

In C programming, **loops** are control flow structures that allow a block of code  
to be executed **repeatedly** based on a condition.

Loops are extremely important because they help:
- Reduce duplicated code
- Automate repetitive tasks
- Process data efficiently
- Build real-world programs (games, systems, algorithms)

This section covers **all loop-related concepts** in C with clear examples.

---

## 🧠 Why Loops Matter

Without loops:
- Programs would be long and repetitive
- Logic would be hard to maintain
- Real-world problems would be almost impossible to solve

With loops:
- One block of code can run hundreds or thousands of times
- Programs become clean, short, and powerful

---

## 🔂 Types of Loops in C

C provides **three main loop structures**:

| Loop Type | Description |
|---------|------------|
| `for` | Used when the number of iterations is known |
| `while` | Used when the number of iterations is unknown |
| `do-while` | Used when the loop must run at least once |

---

# 🔁 FOR LOOP

---

## 📖 Definition

The `for` loop is used when you **know in advance** how many times  
a block of code should be executed.

---

## 🧱 Syntax

```c
for (initialization; condition; update) {
    // code to repeat
}
