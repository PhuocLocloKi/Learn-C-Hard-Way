#include <stdio.h>

/*
==================================================
POINTER LEVELS SUMMARY - PRACTICE VERSION
==================================================

Goal:
- Understand pointer levels by DOING
- See how * ** *** behave in real code

==================================================
*/

int main() {

    /*
    ----------------------------------------------
    EXAMPLE 1: BASIC POINTER LEVELS
    ----------------------------------------------
    */

    int a = 10;

    int *p = &a;
    int **pp = &p;
    int ***ppp = &pp;

    printf("Example 1:\n");
    printf("a = %d\n", a);
    printf("*p = %d\n", *p);
    printf("**pp = %d\n", **pp);
    printf("***ppp = %d\n\n", ***ppp);

    /*
        Dereference level:
        *     → go to a
        **    → go to a
        ***   → go to a
    */

    /*
    ----------------------------------------------
    EXAMPLE 2: MODIFY VALUE AT DIFFERENT LEVELS
    ----------------------------------------------
    */

    *p = 20;        // modify a using pointer
    printf("After *p = 20 → a = %d\n", a);

    **pp = 30;      // modify a using double pointer
    printf("After **pp = 30 → a = %d\n", a);

    ***ppp = 40;    // modify a using triple pointer
    printf("After ***ppp = 40 → a = %d\n\n", a);

    /*
        IMPORTANT:
        No matter how many levels,
        final value is still variable a
    */

    /*
    ----------------------------------------------
    EXAMPLE 3: POINTER CHAIN VISUALIZATION
    ----------------------------------------------
    */

    printf("Addresses:\n");
    printf("&a   = %p\n", &a);
    printf("p    = %p\n", p);
    printf("&p   = %p\n", &p);
    printf("pp   = %p\n", pp);
    printf("&pp  = %p\n", &pp);
    printf("ppp  = %p\n\n", ppp);

    /*
        p   holds &a
        pp  holds &p
        ppp holds &pp
    */

    /*
    ----------------------------------------------
    EXAMPLE 4: THINKING RULE
    ----------------------------------------------

    Variable      → value
    Pointer       → address of variable
    Double ptr    → address of pointer
    Triple ptr    → address of double ptr

    Dereference (*) always moves DOWN one level

    ----------------------------------------------
    */

    return 0;
}
