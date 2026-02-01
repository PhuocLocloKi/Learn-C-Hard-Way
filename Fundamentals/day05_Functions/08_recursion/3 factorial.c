#include <stdio.h>

/*
==================================================
RECURSION EXAMPLE: FACTORIAL
==================================================

FACTORIAL DEFINITION:
n! = n × (n-1) × (n-2) × ... × 1

SPECIAL CASE:
0! = 1

RECURSIVE FORMULA:
factorial(n) = n * factorial(n - 1)

BASE CASE:
factorial(0) = 1
==================================================
*/

int factorial(int n);

int main() {

    int number = 5;

    int result = factorial(number);

    printf("Factorial of %d = %d\n", number, result);

    return 0;
}


/*
--------------------------------------------------
FUNCTION DEFINITION
--------------------------------------------------
*/
int factorial(int n) {

    /*
        BASE CASE:
        Stop recursion
    */
    if (n == 0) {
        return 1;
    }

    /*
        RECURSIVE CASE:
        n * factorial(n - 1)
    */
    return n * factorial(n - 1);
}
