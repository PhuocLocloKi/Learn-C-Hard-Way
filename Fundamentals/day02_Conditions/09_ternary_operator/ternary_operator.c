#include <stdio.h>

int main() {

    /*
    =====================================================
    TERNARY OPERATOR (TOÁN TỬ 3 NGÔI)
    =====================================================

    ▶ Definition:
        The ternary operator is a SHORT-HAND
        version of the if - else statement.

    ▶ Purpose:
        - Reduce code length
        - Write simple conditional logic in ONE line

    ▶ Syntax:
        condition ? value_if_true : value_if_false

    ▶ Important:
        - condition must return 1 (true) or 0 (false)
        - Returns ONE value
        - Best used for SIMPLE logic only
    */

    int number;   // Variable to store user input number

    /*
    ▶ Ask user to enter a number
    */
    printf("Enter a number: ");
    scanf("%d", &number);

    /*
    =====================================================
    METHOD 1: TERNARY WITH VARIABLE ASSIGNMENT
    =====================================================

    ▶ Check if number is EVEN
        - number % 2 == 0 → true (1)
        - else → false (0)
    */

    int isEven = (number % 2 == 0) ? 1 : 0;
    /*
        Explanation:
        - If number is even → isEven = 1
        - If number is odd  → isEven = 0
    */

    /*
    ▶ Use the result inside if - else
    */
    if (isEven == 1) {
        printf("SO CHAN (Even number)\n");
    } else {
        printf("SO LE (Odd number)\n");
    }

    /*
    =====================================================
    METHOD 2: ONE-LINE TERNARY (ADVANCED TRICK)
    =====================================================

    ▶ Directly execute statements
    ▶ No variable needed
    ▶ Less readable if overused
    */

    (number % 2 == 0)
        ? printf("SO CHAN (Even number)\n")
        : printf("SO LE (Odd number)\n");

    /*
    ▶ Program ends here
    */
    return 0;
}
