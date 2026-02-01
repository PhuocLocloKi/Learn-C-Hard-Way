#include <stdio.h>

/*
=====================================================
DO - WHILE LOOP - THEORY
=====================================================

Definition:
A do-while loop executes the loop body
AT LEAST ONE TIME before checking the condition.

Key Difference vs while:
- while     → checks condition BEFORE running
- do-while  → runs FIRST, checks condition AFTER

Use Cases:
- Input validation
- Menus that must show at least once
- User interaction programs
*/

int main() {

    /*
    -------------------------------------------------
    Variable Declaration
    -------------------------------------------------
    number:
    - Stores user input
    - Controls loop condition
    */
    int number;

    /*
    -------------------------------------------------
    DO - WHILE LOOP STRUCTURE
    -------------------------------------------------

    do {
        statements;
    } while (condition);

    Execution Flow:
    1. Execute loop body
    2. Check condition
    3. Repeat if condition is true
    */
    do {

        /*
        ---------------------------------------------
        Loop Body
        ---------------------------------------------
        This block ALWAYS runs at least once
        */
        printf("Enter a positive number: ");
        scanf("%d", &number);

    } while (number <= 0);   // Condition checked AFTER execution

    /*
    -------------------------------------------------
    Loop Exit
    -------------------------------------------------
    Loop stops when number > 0
    */
    printf("Valid number entered.\n");

    return 0;
}
