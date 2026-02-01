#include <stdio.h>

/*
=====================================================
BREAK & CONTINUE - THEORY
=====================================================

break:
- Immediately exits the loop
- Loop stops completely

continue:
- Skips current iteration
- Loop continues to next iteration
*/

int main() {

    /*
    -------------------------------------------------
    Loop Counter
    -------------------------------------------------
    */
    int i;

    /*
    -------------------------------------------------
    FOR LOOP
    -------------------------------------------------
    Loops from 1 to 10
    */
    for (i = 1; i <= 10; i++) {

        /*
        ---------------------------------------------
        CONTINUE EXAMPLE
        ---------------------------------------------
        Skip number 5
        */
        if (i == 5) {
            continue;
        }

        /*
        ---------------------------------------------
        BREAK EXAMPLE
        ---------------------------------------------
        Stop loop when i == 8
        */
        if (i == 8) {
            break;
        }

        /*
        ---------------------------------------------
        Print current number
        ---------------------------------------------
        */
        printf("%d\n", i);
    }

    return 0;
}
