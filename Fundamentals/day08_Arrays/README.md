📦 C ARRAYS – COMPLETE LEARNING ROADMAP

Arrays are the foundation of data storage in C.
Master arrays, and you will fully understand pointers, strings, matrices, and dynamic memory.

🧠 What Is an Array in C?

An array is a collection of elements of the same data type, stored in contiguous memory locations.

Each element is accessed using an index

The first index is always 0

Array size is fixed after declaration

📌 Example concept:

If an array has size n

Valid indexes: 0 → n - 1

🧱 Why Arrays Are Important?

Arrays allow you to:

Store multiple values using a single variable

Process data efficiently using loops

Build advanced structures:

Strings

Matrices

Dynamic arrays

Data structures (lists, stacks, queues)

🗂️ Learning Order of This Repository (IMPORTANT)

This repository is organized from basic to advanced.

👉 You should study folders in order:

Array Basics

Array Input / Output

Array & Pointer Relationship

Multidimensional Arrays

2D Arrays & Functions

Matrix Operations

Spiral Matrix Algorithms

Dynamic Arrays (Heap Memory)

01️⃣ Array Basics
🔹 Key Concepts

Array declaration syntax

Fixed size rule

Index-based access

Modifying array elements

🔹 Important Rules

Array indexes start from 0

Array size cannot be changed

Accessing out-of-bound index causes undefined behavior

02️⃣ Array Input and Output
🔹 Key Concepts

Reading array elements using loops

Printing array elements

Why loops are mandatory for arrays

🔹 Important Insight

Arrays are not printable directly.
You must access elements one by one.

03️⃣ Array and Pointer Relationship ⭐ (VERY IMPORTANT)
🔹 Core Truth

The name of an array is a pointer to its first element

array ≡ &array[0]

array + i ≡ address of array[i]

*(array + i) ≡ value of array[i]

🔹 Key Rules

Array name is a constant pointer

You cannot modify the array name

Pointer arithmetic moves by element size, not bytes manually

📌 This chapter is the bridge between:

Arrays

Pointers

Strings

Dynamic memory

04️⃣ Multidimensional Arrays
🔹 What Is a Multidimensional Array?

A multidimensional array is an array of arrays.

2D array → rows & columns (matrix)

3D array → layers of matrices

🔹 Memory Insight

Stored in row-major order

Traversed using nested loops

05️⃣ 2D Arrays and Functions
🔹 Passing 2D Arrays to Functions

When passing a 2D array:

Number of columns must be specified

Rows can be flexible

📌 This is required because memory layout must be known.

06️⃣ Matrix Concepts
🔹 Matrix Basics

Matrix = 2D array

Square matrix: rows = columns

🔹 Common Operations

Main diagonal

Secondary diagonal

Upper triangle

Lower triangle

Transpose

Matrix addition & subtraction

Matrix multiplication

📌 Matrix multiplication requires:

Columns of A = Rows of B

07️⃣ Spiral Matrix (Algorithm Thinking)
🔹 What Is a Spiral Matrix?

A spiral matrix fills values:

Layer by layer

Clockwise from outside to inside

🔹 Key Control Variables

Top row

Bottom row

Left column

Right column

📌 This topic improves:

Loop control

Boundary management

Algorithm mindset

08️⃣ Dynamic Arrays (Heap Memory)
🔹 Why Dynamic Memory?

Static arrays:

Fixed size

Stack memory

Dynamic arrays:

Flexible size

Heap memory

🧠 Memory Functions Overview
Function	Purpose
malloc()	Allocate memory (garbage values)
calloc()	Allocate memory (initialized to 0)
realloc()	Resize allocated memory
free()	Release memory

📌 Always free allocated memory to avoid memory leaks.

🧠 Final Advice

Arrays are not just syntax

Arrays are memory + pointer logic

If you understand arrays deeply:

Pointers become easy

Strings become logical

Dynamic memory becomes natural

Arrays are where C truly begins.