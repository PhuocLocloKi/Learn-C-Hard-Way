#include <stdio.h>

int main() {

    /*
    =====================================================
    SWITCH - CASE STATEMENT
    =====================================================

    ▶ Definition:
        The switch-case statement is used to
        choose ONE execution path based on
        the value of a SINGLE variable or expression.

    ▶ When to use:
        - When you compare ONE variable
        - Against MULTIPLE fixed values
        - Cleaner than many else-if statements

    ▶ Important rules:
        - The expression inside switch is evaluated ONCE
        - Each case value must be a CONSTANT
        - break keyword is REQUIRED to stop execution
        - default runs when no case matches
    */

    char grade;   // Store student's grade (A, B, C, D, F)

    /*
    ▶ Input a character from user
      - Space before %c avoids reading newline character
    */
    printf("Enter grade (A, B, C, D, F): ");
    scanf(" %c", &grade);

    /*
    ▶ Switch evaluates the value of 'grade'
    */
    switch (grade) {

        /*
        ▶ Case 'A':
            Executed when grade == 'A'
        */
        case 'A':
            printf("Excellent!\n");
            break;   // Stop switch execution

        /*
        ▶ Case 'B' and 'C':
            Multiple cases can share the SAME block
        */
        case 'B':
        case 'C':
            printf("Good job.\n");
            break;

        /*
        ▶ Case 'D':
            Minimum passing grade
        */
        case 'D':
            printf("Passed.\n");
            break;

        /*
        ▶ Case 'F':
            Failed the course
        */
        case 'F':
            printf("Failed.\n");
            break;

        /*
        ▶ Default case:
            Runs when no case matches
        */
        default:
            printf("Invalid grade.\n");
    }

    /*
    ▶ Program ends here
    */
    return 0;
}
