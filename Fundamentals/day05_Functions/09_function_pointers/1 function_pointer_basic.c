#include <stdio.h>

/*
==================================================
FUNCTION POINTER – BASIC
==================================================

WHAT IS A FUNCTION POINTER?

- A function pointer stores the ADDRESS of a function
- It allows calling a function indirectly

SYNTAX:
returnType (*pointerName)(parameterTypes);

Example:
int (*ptr)(int, int);

MEANING:
ptr points to a function that:
- takes two int parameters
- returns an int
==================================================
*/

/*
    Normal function
*/
int add(int a, int b) {
    return a + b;
}

int main() {

    /*
        Declare a function pointer
    */
    int (*ptr)(int, int);

    /*
        Assign function address to pointer
        (function name already acts like an address)
    */
    ptr = add;

    /*
        Call function using function pointer
    */
    int result = ptr(5, 3);

    printf("Result = %d\n", result);

    return 0;
}
