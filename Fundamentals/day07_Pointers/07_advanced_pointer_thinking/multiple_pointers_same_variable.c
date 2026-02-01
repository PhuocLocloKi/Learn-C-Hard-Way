#include <stdio.h>

/*
==================================================
MULTIPLE POINTERS SAME VARIABLE - PRACTICE
==================================================

Goal:
- See how MANY pointers can point to ONE variable
- Understand aliasing problem in real programs

==================================================
*/

int main() {

    /*
    ----------------------------------------------
    EXAMPLE 1: MULTIPLE POINTERS → ONE VARIABLE
    ----------------------------------------------
    */

    int a = 10;

    int *p1 = &a;
    int *p2 = &a;
    int *p3 = p1;

    printf("Example 1:\n");
    printf("Initial a = %d\n", a);

    *p1 = 100;
    printf("After *p1 = 100 → a = %d\n", a);

    *p2 = 200;
    printf("After *p2 = 200 → a = %d\n", a);

    *p3 = 300;
    printf("After *p3 = 300 → a = %d\n\n", a);

    /*
        All pointers modify SAME memory
    */

    /*
    ----------------------------------------------
    EXAMPLE 2: POINTER REASSIGNMENT
    ----------------------------------------------
    */

    int b = 999;

    p1 = &b;    // p1 now points to b

    *p1 = 888;

    printf("Example 2:\n");
    printf("a = %d\n", a);
    printf("b = %d\n\n", b);

    /*
        p1 moved to b
        p2, p3 still point to a
    */

    /*
    ----------------------------------------------
    EXAMPLE 3: MIX POINTER + DOUBLE POINTER
    ----------------------------------------------
    */

    int **pp = &p2;

    **pp = 777;   // modifies a through double pointer

    printf("Example 3:\n");
    printf("After **pp = 777 → a = %d\n\n", a);

    /*
        pp → p2 → a
    */

    /*
    ----------------------------------------------
    EXAMPLE 4: REAL BUG SCENARIO (IMPORTANT)
    ----------------------------------------------
    */

    int *danger = &a;
    int *alias  = danger;

    *danger = 111;

    printf("Example 4:\n");
    printf("a via alias = %d\n", *alias);

    /*
        This is how bugs happen:
        - Many pointers
        - Same variable
        - Hard to track who changed value
    */

    return 0;
}
