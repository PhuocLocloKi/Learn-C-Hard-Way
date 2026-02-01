#include <stdio.h>

/*
==================================================
PASS ADDRESS TO FUNCTION (CALL BY REFERENCE STYLE)
==================================================

IMPORTANT:
- C DOES NOT support real call by reference
- C passes ADDRESS using POINTER
- But EFFECT is the same as call by reference

==================================================
*/

void changeValue(int *x) {
    /*
        x is a POINTER
        It stores the ADDRESS of variable from main
    */

    printf("Inside function:\n");
    printf("Address received (x): %p\n", x);
    printf("Value before change (*x): %d\n", *x);

    /*
        Dereference pointer to modify value
    */
    *x = 100;

    printf("Value after change (*x): %d\n", *x);
}

int main() {

    int a = 10;

    printf("Before function call:\n");
    printf("Address of a: %p\n", &a);
    printf("Value of a: %d\n\n", a);

    /*
        Pass ADDRESS of a
    */
    changeValue(&a);

    printf("\nAfter function call:\n");
    printf("Value of a: %d\n", a);

    /*
        a changed because:
        - function modified memory at &a
        - pointer x pointed to that memory
    */

    return 0;
}
