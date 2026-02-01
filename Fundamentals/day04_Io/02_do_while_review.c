#include <stdio.h>

int main() {

    /*
    =====================================================
    DO - WHILE LOOP THEORY
    =====================================================
    - Loop executes AT LEAST ONE TIME
    - Condition is checked AFTER loop body
    - Commonly used for input validation
    */

    int i = 1;   // Loop control variable

    // Example 1: Basic do-while loop
    do {
        printf("i = %d\n", i);   // Print current value of i
        i++;                    // Increase i by 1
    } while (i <= 5);            // Check condition AFTER execution


    /*
    =====================================================
    FORCE USER TO INPUT CORRECT VALUE
    =====================================================
    */

    int a;   // Variable to store user input

    // Keep asking until user enters 15
    do {
        printf("Enter a (must be 15): ");
        scanf("%d", &a);        // Read integer input

        // Clear buffer after scanf
        while (getchar() != '\n');

    } while (a != 15);           // Repeat if condition is false

    printf("Correct value entered!\n");

    return 0;
}
