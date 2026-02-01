#include <stdio.h>

/*
==================================================
POINTER AND ADDRESS (BEGINNER → INTERMEDIATE)
==================================================

KEY CONCEPTS IN THIS FILE:

1. Every variable has a memory address
2. The & operator gets the address of a variable
3. A pointer stores an address
4. A pointer can change which variable it points to

==================================================
*/

int main() {

    /*
    ----------------------------------------------
    1. DECLARE NORMAL VARIABLES
    ----------------------------------------------
    */

    int a = 10;
    int b = 20;

    /*
        a and b are normal integer variables
        - a stores value 10
        - b stores value 20
        - each variable has its OWN memory address
    */

    /*
    ----------------------------------------------
    2. PRINT ADDRESSES OF VARIABLES
    ----------------------------------------------
    */

    printf("Address of a: %p\n", &a);
    printf("Address of b: %p\n", &b);

    /*
        &a → address of variable a
        &b → address of variable b

        NOTE:
        - Addresses are different
        - Addresses may change each time you run the program
    */

    /*
    ----------------------------------------------
    3. DECLARE A POINTER
    ----------------------------------------------
    */

    int *p;

    /*
        int *p;
        - p is a pointer to int
        - p can store the address of an int variable
        - p is NOT initialized yet
    */

    /*
    ----------------------------------------------
    4. ASSIGN ADDRESS TO POINTER
    ----------------------------------------------
    */

    p = &a;

    /*
        p = &a;
        - p now stores the address of a
        - p is pointing to variable a
    */

    printf("\nPointer p is pointing to a\n");
    printf("Value of p (address): %p\n", p);
    printf("Value at address p (*p): %d\n", *p);

    /*
        p   → address of a
        *p  → value of a
    */

    /*
    ----------------------------------------------
    5. CHANGE POINTER TO POINT TO ANOTHER VARIABLE
    ----------------------------------------------
    */

    p = &b;

    /*
        p = &b;
        - p no longer points to a
        - p now points to b
    */

    printf("\nPointer p is now pointing to b\n");
    printf("Value of p (address): %p\n", p);
    printf("Value at address p (*p): %d\n", *p);

    /*
        Same pointer
        Different address
        Different value

        Pointer can be reassigned freely
    */

    /*
    ----------------------------------------------
    6. MODIFY VALUE THROUGH POINTER
    ----------------------------------------------
    */

    *p = 99;

    /*
        *p = 99;
        - Modify the value at the address p points to
        - p points to b
        - So b becomes 99
    */

    printf("\nAfter modifying through pointer:\n");
    printf("Value of a: %d\n", a);
    printf("Value of b: %d\n", b);

    /*
        a remains unchanged
        b is changed because p was pointing to b
    */

    /*
    ----------------------------------------------
    7. IMPORTANT SUMMARY (MUST REMEMBER)
    ----------------------------------------------

    &variable → get address
    pointer   → store address
    *pointer  → access value at that address

    Pointer can:
    - point to different variables
    - modify variables indirectly

    Pointer DOES NOT belong to one variable forever.

    ----------------------------------------------
    */

    return 0;
}
