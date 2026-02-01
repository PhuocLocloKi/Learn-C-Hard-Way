#include <stdio.h>

/*
==================================================
DEREFERENCE AND MODIFY VALUE USING POINTER
==================================================

KEY IDEAS:

1. pointer      → stores an address
2. *pointer     → accesses the value at that address
3. Modifying *pointer modifies the original variable
4. Pointer gives INDIRECT access to memory

IMPORTANT:
- * has TWO meanings:
  + In declaration → pointer
  + In usage       → dereference

==================================================
*/

int main() {

    /*
    ----------------------------------------------
    1. NORMAL VARIABLE
    ----------------------------------------------
    */

    int number = 100;

    /*
        number is a normal integer variable
        - Value stored: 100
        - Has its own memory address
    */

    /*
    ----------------------------------------------
    2. POINTER POINTING TO VARIABLE
    ----------------------------------------------
    */

    int *ptr = &number;

    /*
        ptr stores the address of number
        ptr → address of number
        *ptr → value of number
    */

    /*
    ----------------------------------------------
    3. ACCESS VALUE USING POINTER
    ----------------------------------------------
    */

    printf("Value of number: %d\n", number);
    printf("Value using pointer (*ptr): %d\n", *ptr);

    /*
        Both print the SAME value
        Because they refer to the SAME memory location
    */

    /*
    ----------------------------------------------
    4. MODIFY VALUE USING POINTER
    ----------------------------------------------
    */

    *ptr = 250;

    /*
        This line means:
        - Go to the memory address stored in ptr
        - Change the value at that address to 250

        Since ptr points to number:
        → number is updated
    */

    printf("\nAfter modifying through pointer:\n");
    printf("Value of number: %d\n", number);
    printf("Value using pointer (*ptr): %d\n", *ptr);

    /*
    ----------------------------------------------
    5. MODIFY VARIABLE DIRECTLY
    ----------------------------------------------
    */

    number = 999;

    /*
        Now we modify the variable directly
        Because ptr points to number:
        → *ptr also changes
    */

    printf("\nAfter modifying variable directly:\n");
    printf("Value of number: %d\n", number);
    printf("Value using pointer (*ptr): %d\n", *ptr);

    /*
    ----------------------------------------------
    6. IMPORTANT MEMORY RELATIONSHIP
    ----------------------------------------------

    ptr  -------->  number
                    |
                    |
                 memory
                    |
                    |
                 value

    ptr and number are TWO NAMES
    for the SAME memory location

    ----------------------------------------------
    */

    /*
    ----------------------------------------------
    7. COMMON BEGINNER MISTAKE
    ----------------------------------------------

    ptr = 500;   ❌ WRONG
    *ptr = 500;  ✅ CORRECT

    Why?
    - ptr stores an address
    - *ptr stores a value

    ----------------------------------------------
    */

    return 0;
}
