#include <stdio.h>

int main() {

    /*
    =====================================================
    LOGICAL OPERATORS (TOÁN TỬ LOGIC)
    =====================================================

    ▶ Definition:
        Logical operators are used to combine or negate conditions.

    ▶ Operators:

        &&  AND
            - All conditions must be TRUE
            - Stops when a FALSE is found

        ||  OR
            - Only ONE condition needs to be TRUE
            - Stops when a TRUE is found

        !   NOT
            - Reverses the result
            - TRUE → FALSE
            - FALSE → TRUE
    */

    int age = 20;
    int hasID = 1; // 1 = true, 0 = false

    /*
    ▶ AND operator example
        Condition:
        age >= 18  AND  hasID == 1
    */
    if (age >= 18 && hasID == 1) {
        printf("Allowed to enter.\n");
    }

    /*
    ▶ OR operator example
        Only one condition needs to be true
    */
    if (age < 18 || hasID == 0) {
        printf("Need verification.\n");
    }

    /*
    ▶ NOT operator example
        Reverse the condition
    */
    if (!(age < 18)) {
        printf("Age is 18 or older.\n");
    }

    return 0;
}
