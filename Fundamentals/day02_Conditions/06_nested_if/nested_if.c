#include <stdio.h>

int main() {

    /*
    =====================================================
    NESTED IF STATEMENT
    =====================================================

    ▶ Definition:
        A nested if statement is an if statement
        placed INSIDE another if statement.

    ▶ Purpose:
        Used when a condition depends on
        the result of another condition.

    ▶ Key idea:
        - The OUTER if must be TRUE
        - THEN the INNER if is checked
    */

    int age;        // Store user's age
    int isCitizen;  // Store citizenship status (1 = yes, 0 = no)

    /*
    ▶ Input age from user
    */
    printf("Enter age: ");
    scanf("%d", &age);

    /*
    ▶ Input citizenship status
    */
    printf("Are you a citizen? (1 = yes, 0 = no): ");
    scanf("%d", &isCitizen);

    /*
    ▶ First condition:
        Check if the person is old enough
    */
    if (age >= 18) {

        // This line runs ONLY if age >= 18
        printf("Age requirement passed.\n");

        /*
        ▶ Second condition (nested inside first if):
            Check citizenship status
        */
        if (isCitizen == 1) {

            // Both conditions are TRUE
            printf("You can vote.\n");

        } else {

            // Age is enough, but NOT a citizen
            printf("You must be a citizen to vote.\n");
        }

    } else {

        // Age condition failed
        printf("Not old enough to vote.\n");
    }

    /*
    ▶ Program ends here
    */
    return 0;
}
