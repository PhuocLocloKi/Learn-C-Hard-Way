# C Programming Labs

## Overview

This repository documents my learning journey and hands-on practice with the **C programming language**.

C is a foundational programming language in computer science. It is widely used for building system software, performance-critical applications, and for understanding how computers work at a low level.

This repository focuses on:
- Building a strong foundation in **procedural programming**
- Understanding **memory management**
- Practicing **low-level problem solving**
- Writing **clean, readable, and efficient C code**

All source code follows **standard C**, with an emphasis on clarity and correctness.

---

## What Is C?

C is a **general-purpose programming language** created by **Dennis Ritchie** at Bell Labs in **1972**, originally developed for building the UNIX operating system.

C is considered a **middle-level language**:
- It works close to hardware like low-level languages (Assembly)
- But still provides structured programming features like high-level languages

Because of this balance, C is both **powerful** and **portable**.

---

## Why Learn C?

Learning C helps you:

- Understand how **memory works**
- Learn how software interacts with **hardware**
- Write **fast and efficient programs**
- Build a strong base for learning other languages

If you understand C, learning languages like **C++**, **Java**, **Python**, or **C#** becomes much easier.

C is also heavily used in:
- Operating systems (Linux, UNIX, parts of Windows)
- Embedded systems (cars, TVs, IoT devices)
- Game engines and graphics systems
- Databases and system tools
- Core libraries of other programming languages

---

## Strengths of C

### Low-level control
C allows direct access to memory and system resources, giving programmers fine-grained control over performance.

### Small and efficient
C has a small number of keywords and lightweight standard libraries, making programs fast and efficient.

### Powerful and flexible
C can be used for a wide range of applications:
- System software
- Compilers
- Embedded systems
- High-performance applications

### Portable
C programs can run on many different systems with minimal changes, thanks to standardized C specifications (ANSI / ISO C).

---

## Limitations of C

- Programs are easier to write incorrectly if you are not careful
- Errors are often detected at compile time or runtime, not automatically
- Large C programs can be harder to maintain without good structure and documentation
- No built-in support for object-oriented programming

However, these limitations are also why C is excellent for learning **discipline and correctness** in programming.

---

## C vs C++

- C is a **procedural language** (functions + data)
- C++ extends C with **object-oriented features** (classes, objects)
- C focuses on simplicity and performance
- C++ adds more abstraction and features

> Note: Large and well-structured programs can still be written in pure C using functions and structures.

---

## Development Environment

To write and run C programs, you need:
- A text editor or IDE
- A C compiler (such as GCC)

Popular IDEs for C include:
- Visual Studio Code (with GCC/Clang)
- Dev-C++
- Code::Blocks
- CLion

This repository primarily uses **Visual Studio Code** with a standard C compiler.

---

## Compilation and Running Programs

C is a compiled language, which means source code must be compiled before it can run.

This repository uses **GCC (GNU Compiler Collection)**, one of the most widely used C compilers.

### Compile a C program

```bash
gcc main.c -o main
