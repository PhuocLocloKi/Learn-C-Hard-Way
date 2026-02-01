#include <stdio.h>

int main() {

    /*
    =====================================================
    IF - ELSE IF - ELSE STATEMENT
    =====================================================

    ▶ Definition:
        The if - else if - else statement is used when
        there are MULTIPLE conditions to evaluate.

    ▶ Purpose:
        - Handle different cases based on conditions
        - Execute ONLY ONE matching block

    ▶ Syntax:
        if (condition1) {
            statements;
        } else if (condition2) {
            statements;
        } else {
            statements;
        }

    ▶ Important Rules:
        - Conditions are checked from TOP to BOTTOM
        - As soon as one condition is TRUE (1),
          the corresponding block executes
        - All remaining conditions are SKIPPED
        - else runs ONLY when all conditions are false
    */

    int score;   // Variable to store student's score

    /*
    ▶ Ask user to input the score
    */
    printf("Enter your score: ");
    scanf("%d", &score);

    /*
    =====================================================
    GRADING LOGIC
    =====================================================

    ▶ Score range:
        90 - 100 → Grade A
        80 - 89  → Grade B
        70 - 79  → Grade C
        60 - 69  → Grade D
        < 60     → Grade F
    */

    if (score >= 90) {
        // Runs when score is 90 or above
        printf("Grade: A\n");

    } else if (score >= 80) {
        // Runs when score is between 80 and 89
        printf("Grade: B\n");

    } else if (score >= 70) {
        // Runs when score is between 70 and 79
        printf("Grade: C\n");

    } else if (score >= 60) {
        // Runs when score is between 60 and 69
        printf("Grade: D\n");

    } else {
        // Runs when score is below 60
        printf("Grade: F\n");
    }

    /*
    ▶ End of program
    */
    return 0;
}
