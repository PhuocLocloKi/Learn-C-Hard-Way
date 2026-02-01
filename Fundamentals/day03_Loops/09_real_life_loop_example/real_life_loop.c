#include <stdio.h>

/*
=====================================================
REAL-LIFE LOOP EXAMPLE
=====================================================

Scenario:
- ATM PIN verification system
- User has ONLY 3 attempts

Concepts Used:
- while loop
- if condition
- counter variable
*/

int main() {

    /*
    -------------------------------------------------
    Variable Declaration
    -------------------------------------------------
    pin      → correct PIN
    input    → user input
    attempts → number of tries
    */
    int pin = 1234;
    int input;
    int attempts = 0;

    /*
    -------------------------------------------------
    WHILE LOOP
    -------------------------------------------------
    Loop runs while attempts < 3
    */
    while (attempts < 3) {

        printf("Enter PIN: ");
        scanf("%d", &input);

        /*
        ---------------------------------------------
        Correct PIN
        ---------------------------------------------
        */
        if (input == pin) {
            printf("Access granted.\n");
            return 0;   // Exit program immediately
        }

        /*
        ---------------------------------------------
        Wrong PIN
        ---------------------------------------------
        */
        printf("Wrong PIN.\n");
        attempts++;
    }

    /*
    -------------------------------------------------
    Card blocked after 3 failed attempts
    -------------------------------------------------
    */
    printf("Card blocked.\n");

    return 0;
}
