#include <stdio.h>
// Include Standard Input Output library
// Needed for printf()

int main() {

    /*
    =====================================================
    MULTIPLE CONDITIONS IN C
    =====================================================

    ▶ In real programs, one condition is often NOT enough.
    ▶ We combine multiple conditions using LOGICAL OPERATORS.

    LOGICAL OPERATORS:
    -----------------------------------------------------
    &&  (AND)
        - All conditions must be TRUE
        - If one condition is FALSE → result is FALSE

    ||  (OR)
        - Only ONE condition needs to be TRUE
        - If one condition is TRUE → result is TRUE

    !   (NOT)
        - Reverses the condition
        - TRUE  → FALSE
        - FALSE → TRUE
    */

    int age = 20;
    // Variable that stores the person's age

    int hasLicense = 1;
    // Boolean-like variable
    // 1 = true (has driving license)
    // 0 = false (no driving license)

    /*
    =====================================================
    REAL-LIFE EXAMPLE
    =====================================================

    ▶ A person can drive a car ONLY IF:
        1. age >= 18
        2. hasLicense == true

    ▶ BOTH conditions MUST be true
    ▶ Therefore, we use the AND (&&) operator
    */

    if (age >= 18 && hasLicense == 1) {
        // First condition: age >= 18
        // Second condition: hasLicense == 1
        // If BOTH are true → enter this block

        printf("You are allowed to drive.\n");
        // Executed only when conditions are satisfied

    } else {
        // Executed when AT LEAST ONE condition is false

        printf("You are NOT allowed to drive.\n");
    }

    /*
    =====================================================
    IMPORTANT NOTES
    =====================================================

    ▶ AND (&&) stops checking when it finds FALSE
    ▶ OR  (||) stops checking when it finds TRUE

    ▶ This behavior improves performance
    ▶ This is called SHORT-CIRCUIT EVALUATION
    */

    return 0;
    // End of program
}
