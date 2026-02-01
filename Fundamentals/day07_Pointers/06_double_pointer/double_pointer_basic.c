#include <stdio.h>

/*
==================================================
DOUBLE POINTER BASIC
==================================================

- Pointer is ALSO a variable
- Pointer has its OWN address
- To store address of a pointer → need DOUBLE POINTER

==================================================
*/

int main() {

    int a = 10;

    int *p = &a;
    /*
        p is a pointer
        p stores address of a
    */

    int **pp = &p;
    /*
        pp is a DOUBLE POINTER
        pp stores address of pointer p
    */

    /*
    ----------------------------------------------
    MEMORY RELATIONSHIP
    ----------------------------------------------

        a   = 10
        &a  = address of a

        p   = &a
        &p  = address of pointer p

        pp  = &p

    ----------------------------------------------
    */

    printf("Value of a: %d\n", a);
    printf("Value via *p: %d\n", *p);
    printf("Value via **pp: %d\n\n", **pp);

    /*
        *p   → value of a
        **pp → value of a
    */

    printf("Address of a: %p\n", &a);
    printf("Value of p (address of a): %p\n", p);
    printf("Value of *pp (address of a): %p\n", *pp);

    return 0;
}
