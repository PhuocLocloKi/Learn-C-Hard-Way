#include <stdio.h>

/*
=====================================================
FOR LOOP WITH CONDITION (for + if)
=====================================================

Definition:
A "for loop with condition" means using an IF statement
inside a FOR loop to control what should be executed
during each iteration.

Why use this?
- When looping alone is NOT enough
- When we need to FILTER data
- When only SOME values should be processed

Common use cases:
- Print only even or odd numbers
- Count specific values
- Skip unwanted data
- Apply rules inside a loop

General Pattern:

for (initialization; condition; update) {
    if (logical_condition) {
        statements;
    }
}
*/

int main() {

    /*
    -------------------------------------------------
    Variable Declaration
    -------------------------------------------------
    i is used as a loop counter.
    It controls how many times the loop will run.
    */
    int i;

    /*
    -------------------------------------------------
    FOR LOOP EXPLANATION
    -------------------------------------------------

    for (i = 1; i <= 10; i++)

    Step-by-step execution:

    1. i = 1
       → Initialization (runs ONCE)

    2. i <= 10
       → Condition is checked BEFORE every loop
       → If true (1), loop continues
       → If false (0), loop stops

    3. Loop body executes

    4. i++
       → Increase i by 1 after each iteration

    5. Repeat from step 2
    */
    for (i = 1; i <= 10; i++) {

        /*
        ---------------------------------------------
        IF CONDITION INSIDE FOR LOOP
        ---------------------------------------------

        Condition:
        i % 2 == 0

        Explanation:
        - % is the modulo operator
        - It returns the remainder after division

        Examples:
        2 % 2 = 0  → even
        3 % 2 = 1  → odd

        Rule:
        If remainder == 0 → EVEN number
        */
        if (i % 2 == 0) {

            /*
            This line runs ONLY when the condition is true.
            That means only EVEN numbers are printed.
            */
            printf("%d is EVEN\n", i);
        }
    }

    /*
    -------------------------------------------------
    Program ends successfully
    -------------------------------------------------
    */
    return 0;
}
