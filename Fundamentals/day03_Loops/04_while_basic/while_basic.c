#include <stdio.h>

/*
=====================================================
WHILE LOOP - BASIC THEORY
=====================================================

Definition:
A while loop is used to repeat a block of code
WHEN the number of iterations is UNKNOWN in advance.

Key Characteristics:
- Condition is checked BEFORE the loop body runs
- If the condition is false at the beginning,
  the loop will NOT run at all

General Syntax:

while (condition) {
    statements;
}

Execution Flow:
1. Check condition
2. If condition is true → execute loop body
3. Update loop variable
4. Repeat from step 1
*/

int main() {

    /*
    -------------------------------------------------
    Loop Control Variable
    -------------------------------------------------
    i:
    - Acts as a counter
    - Controls when the loop stops
    */
    int i = 1;

    /*
    -------------------------------------------------
    WHILE LOOP EXPLANATION
    -------------------------------------------------

    while (i <= 5)

    Meaning:
    - As long as i is less than or equal to 5,
      the loop keeps running
    */
    while (i <= 5) {

        /*
        ---------------------------------------------
        Loop Body
        ---------------------------------------------
        This code executes ONLY when condition is true
        */
        printf("i = %d\n", i);

        /*
        ---------------------------------------------
        Update Statement
        ---------------------------------------------
        i++ increases i by 1 after each iteration

        IMPORTANT:
        Without this line → INFINITE LOOP
        */
        i++;
    }

    /*
    -------------------------------------------------
    Program ends successfully
    -------------------------------------------------
    */
    return 0;
}
