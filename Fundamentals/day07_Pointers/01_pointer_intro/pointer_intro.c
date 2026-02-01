#include <stdio.h>

/*
==================================================
POINTER INTRODUCTION (BEGINNER LEVEL)
==================================================

WHAT IS A POINTER?

- A pointer is a variable that stores a MEMORY ADDRESS.
- It does NOT store a value directly.
- It stores WHERE a value is located in memory.

WHY POINTERS EXIST?

- To work directly with memory
- To modify variables from functions
- To work with arrays, strings, dynamic memory
- To build data structures

IMPORTANT SYMBOLS:

&  → address-of operator
*  → pointer operator / dereference operator

==================================================
*/

int main() {

    /*
    ----------------------------------------------
    1. NORMAL VARIABLE
    ----------------------------------------------
    */

    int a = 500;

    /*
        a is a normal variable
        - It stores a VALUE
        - Value = 500
    */

    /*
    ----------------------------------------------
    2. POINTER VARIABLE
    ----------------------------------------------
    */

    int *pointer = &a;

    /*
        int *pointer;
        → declares a pointer to int

        &a
        → gets the address of variable a

        pointer = &a;
        → pointer now STORES the address of a
        → pointer is pointing to a
    */

    /*
    ----------------------------------------------
    3. VALUE VS ADDRESS
    ----------------------------------------------
    */

    printf("Value of a: %d\n", a);
    /*
        Prints the VALUE stored in a
        Output: 500
    */

    printf("Address of a: %p\n", &a);
    /*
        Prints the MEMORY ADDRESS of a
        %p is used to print addresses
    */

    printf("Value stored in pointer (address of a): %p\n", pointer);
    /*
        pointer stores the address of a
        So this prints the SAME address as &a
    */

    printf("Address of pointer itself: %p\n", &pointer);
    /*
        pointer is also a variable
        So it also has its own address
    */

    /*
    ----------------------------------------------
    4. DEREFERENCE OPERATOR (*)
    ----------------------------------------------
    */

    printf("Value at address pointer is pointing to (*pointer): %d\n", *pointer);

    /*
        *pointer means:
        - Go to the address stored in pointer
        - Get the VALUE at that address

        Since pointer points to a:
        *pointer == value of a
    */

    /*
    ----------------------------------------------
    5. MODIFY VALUE THROUGH POINTER
    ----------------------------------------------
    */

    *pointer = 1000;

    /*
        This line means:
        - Go to the address stored in pointer
        - Change the value at that address to 1000

        Because pointer points to a:
        → a is modified
    */

    printf("\nAfter modifying through pointer:\n");
    printf("Value of a: %d\n", a);
    printf("Value via pointer (*pointer): %d\n", *pointer);

    /*
    ----------------------------------------------
    6. IMPORTANT SUMMARY (VERY IMPORTANT)
    ----------------------------------------------

    a           → value
    &a          → address of a
    pointer     → address of a
    *pointer    → value of a

    POINTER DOES NOT STORE THE VALUE.
    POINTER STORES THE ADDRESS.

    *pointer and a refer to the SAME memory location.

    ----------------------------------------------
    */

    return 0;
}
