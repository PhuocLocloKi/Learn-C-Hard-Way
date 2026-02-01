#include <stdio.h>

/*
==================================================
POINTER BASIC INTRODUCTION
==================================================

This program explains:
- What a pointer is
- How pointers store addresses
- How to use & and *
- How pointers can modify variables
==================================================
*/

int main() {

    /*
    -----------------------------------------------
    STEP 1: Declare a normal variable
    -----------------------------------------------
    */

    // a is a normal integer variable
    // It stores a VALUE, not an address
    int a = 500;

    /*
    -----------------------------------------------
    STEP 2: Declare a pointer
    -----------------------------------------------
    */

    // ptr is a pointer variable
    // It stores the ADDRESS of variable a
    int *ptr = &a;

    /*
    -----------------------------------------------
    STEP 3: Print values and addresses
    -----------------------------------------------
    */

    // Print the value of a
    printf("Value of a        : %d\n", a);

    // Print the address of a
    // %p is the correct format specifier for addresses
    printf("Address of a      : %p\n", (void*)&a);

    // Print the value stored in ptr
    // This value IS an address
    printf("Value of ptr      : %p\n", (void*)ptr);

    // Print the address of the pointer itself
    printf("Address of ptr    : %p\n", (void*)&ptr);

    /*
    -----------------------------------------------
    STEP 4: Modify variable a using pointer
    -----------------------------------------------
    */

    /*
        *ptr means:
        "Go to the address stored in ptr,
         then access the value at that address"

        Since ptr points to a,
        *ptr is actually the same as a
    */

    *ptr += 500;

    /*
    -----------------------------------------------
    STEP 5: Check the result
    -----------------------------------------------
    */

    // Value of a has changed
    printf("New value of a    : %d\n", a);

    return 0;
}
