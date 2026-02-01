#include <stdio.h>

/*
=====================================================
NESTED LOOPS - THEORY
=====================================================

Definition:
A nested loop is a loop placed INSIDE another loop.

Usage:
- Patterns (stars, numbers)
- Tables (multiplication table)
- Matrices (2D arrays)

Rule:
- Outer loop controls ROWS
- Inner loop controls COLUMNS
*/

int main() {

    /*
    -------------------------------------------------
    Variable Declaration
    -------------------------------------------------
    i → row counter (outer loop)
    j → column counter (inner loop)
    */
    int i, j;

    /*
    -------------------------------------------------
    OUTER LOOP
    -------------------------------------------------
    Controls number of rows
    Runs 3 times
    */
    for (i = 1; i <= 3; i++) {

        /*
        ---------------------------------------------
        INNER LOOP
        ---------------------------------------------
        Controls number of columns
        Runs 5 times for EACH row
        */
        for (j = 1; j <= 5; j++) {
            printf("* ");
        }

        /*
        ---------------------------------------------
        New line after finishing one row
        ---------------------------------------------
        */
        printf("\n");
    }

    return 0;
}
