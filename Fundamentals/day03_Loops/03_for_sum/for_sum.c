#include <stdio.h>

/*
=====================================================
FOR LOOP - SUM CALCULATION
=====================================================

Definition:
This program demonstrates how to use a FOR loop
to calculate the SUM of a sequence of numbers.

Why this is important:
- Extremely common in programming
- Used in:
  + Mathematics
  + Statistics
  + Algorithms
  + Data processing
  + Competitive programming

Key Concept:
ACCUMULATOR PATTERN

An accumulator is a variable used to
store and update a running total.
*/

int main() {

    /*
    -------------------------------------------------
    Variable Declaration
    -------------------------------------------------
    sum:
    - Used as an accumulator
    - Stores the total result
    - Must be initialized to 0

    i:
    - Loop counter
    */
    int sum = 0;
    int i;

    /*
    -------------------------------------------------
    FOR LOOP EXPLANATION
    -------------------------------------------------

    for (i = 1; i <= 10; i++)

    Execution flow:

    1. i = 1
       → Initialization (runs once)

    2. i <= 10
       → Condition check before each loop

    3. Loop body executes:
       sum = sum + i

    4. i++
       → Increase i by 1

    5. Repeat until i > 10
    */
    for (i = 1; i <= 10; i++) {

        /*
        ---------------------------------------------
        SUM OPERATION
        ---------------------------------------------

        sum = sum + i

        Step-by-step example:
        i = 1 → sum = 0  + 1  = 1
        i = 2 → sum = 1  + 2  = 3
        i = 3 → sum = 3  + 3  = 6
        ...
        i = 10 → sum = 45 + 10 = 55
        */
        sum = sum + i;
    }

    /*
    -------------------------------------------------
    Output Result
    -------------------------------------------------
    After the loop finishes,
    sum contains the total value.
    */
    printf("Sum = %d\n", sum);

    /*
    -------------------------------------------------
    Program ends successfully
    -------------------------------------------------
    */
    return 0;
}
