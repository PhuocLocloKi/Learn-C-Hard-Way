#include <stdio.h>

/*
=====================================================
FOR LOOP - BASIC THEORY
=====================================================

Definition:
A for loop is used to repeat a block of code
a FIXED number of times.

Use case:
- When the number of iterations is known in advance
- When using a counter variable

General Syntax:

for (initialization; condition; update) {
    statements;
}

Loop Execution Order:
1. Initialization   → runs once
2. Condition check  → before each iteration
3. Loop body        → executed if condition is true
4. Update           → after each iteration
5. Repeat from step 2
*/

int main() {

    // Loop counter variable
    int i;

    /*
    for (i = 1; i <= 5; i++)

    i = 1     → initialization (run once)
    i <= 5    → loop condition
    i++       → increment i after each iteration
    */

    for (i = 1; i <= 5; i++) {

        // Print current value of i
        printf("i = %d\n", i);
    }

    // Program ends successfully
    return 0;
}
