#include <stdio.h>

/*
==================================================
SWAP USING POINTER
==================================================

WHY POINTER IS REQUIRED?

- swap needs to modify TWO variables
- passing values creates COPIES
- passing addresses allows DIRECT MEMORY ACCESS

==================================================
*/

void swap(int *x, int *y) {

    /*
        x and y store addresses of a and b
        *x and *y access original variables
    */

    int temp;

    temp = *x;
    *x = *y;
    *y = temp;
}

int main() {

    int a = 5;
    int b = 10;

    printf("Before swap:\n");
    printf("a = %d, b = %d\n\n", a, b);

    /*
        Pass addresses of a and b
    */
    swap(&a, &b);

    printf("After swap:\n");
    printf("a = %d, b = %d\n", a, b);

    /*
        Swap successful because:
        - function modified original memory
        - pointer enabled call by reference behavior
    */

    return 0;
}
