#include <stdio.h>

int main() {

    /*
    =====================================================
    RELATIONAL OPERATORS (TOÁN TỬ SO SÁNH)
    =====================================================

    ▶ Definition:
      Relational operators are used to compare two values.

    ▶ Return value:
      - 1 → true
      - 0 → false

    ▶ Commonly used in:
      - if
      - else if
      - loops (for, while)

    ▶ Operators list:
        ==   equal to
        !=   not equal to
        >    greater than
        <    less than
        >=   greater than or equal
        <=   less than or equal
    */

    int a = 100;
    int b = 50;

    // Check if a is equal to b
    printf("a == b : %d\n", a == b);

    // Check if a is NOT equal to b
    printf("a != b : %d\n", a != b);

    // Check if a is greater than b
    printf("a > b  : %d\n", a > b);

    // Check if a is less than b
    printf("a < b  : %d\n", a < b);

    // Check if a is greater than or equal to b
    printf("a >= b : %d\n", a >= b);

    // Check if a is less than or equal to b
    printf("a <= b : %d\n", a <= b);

    /*
    ▶ Notes:
      - Relational operators do NOT return true/false keywords in C
      - They return integer values: 1 or 0
    */

    return 0;
}
