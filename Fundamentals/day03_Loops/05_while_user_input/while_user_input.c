#include <stdio.h>

/*
=====================================================
WHILE LOOP WITH USER INPUT - THEORY
=====================================================

Definition:
This while loop is controlled by USER INPUT.
The loop continues running until the user
enters a value that breaks the condition.

Key Idea:
- The loop does NOT know in advance how many times it will run
- User decides when the loop stops

Use Cases:
- Menu-driven programs
- Input validation
- Repeating user interaction
- Real-world applications
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
    First Input (IMPORTANT)
    -------------------------------------------------
    We must read input BEFORE the while loop
    so the condition can be checked the first time
    */
    printf("Enter a number (negative to stop): ");
    scanf("%d", &number);

    /*
    -------------------------------------------------
    WHILE LOOP LOGIC
    -------------------------------------------------
    Condition:
        number >= 0

    Meaning:
    - Loop continues while number is NOT negative
    - Loop stops when number < 0
    */
    while (number >= 0) {

        /*
        ---------------------------------------------
        Loop Body
        ---------------------------------------------
        Prints the value entered by the user
        */
        printf("You entered: %d\n", number);

        /*
        ---------------------------------------------
        Update Input (VERY IMPORTANT)
        ---------------------------------------------
        Ask user for a new value
        Without this → INFINITE LOOP
        */
        printf("Enter a number (negative to stop): ");
        scanf("%d", &number);
    }

    /*
    -------------------------------------------------
    Loop Exit Condition
    -------------------------------------------------
    Reached when user enters a negative number
    */
    printf("Loop stopped. Negative number detected.\n");

    return 0;
}
