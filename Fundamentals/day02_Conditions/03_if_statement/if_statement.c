#include <stdio.h>
// Standard Input Output library
// Needed for printf() and scanf()

int main() {

    /*
    =====================================================
    IF STATEMENT IN C
    =====================================================

    ▶ Definition:
        The if statement is used to make a decision.
        It executes a block of code ONLY when
        the condition evaluates to TRUE (1).

    ▶ Basic Syntax:
        if (condition) {
            // code executed if condition is true
        }

    ▶ Important Notes:
        - The condition MUST return:
            1 → true
            0 → false
        - If the condition is false, the if block is skipped
        - if is written in lowercase (IF or If will cause an error)
    */

    int balance;
    // Variable to store user's bank balance

    printf("Enter your bank balance: ");
    // Ask the user to enter balance

    scanf("%d", &balance);
    // Read integer input from user
    // Store the value inside variable 'balance'

    /*
    =====================================================
    DECISION MAKING USING IF
    =====================================================

    ▶ Condition:
        balance > 0

    ▶ Meaning:
        - If balance is greater than 0 → user has money
        - If balance is 0 or less → user has no money
    */

    if (balance > 0) {
        // This block runs ONLY when condition is true

        printf("You have money in your account.\n");
        // Printed when balance > 0
    }

    /*
    ▶ This line is OUTSIDE the if block
    ▶ It runs NO MATTER what the condition is
    */

    printf("Program finished.\n");

    return 0;
    // End of program
}
