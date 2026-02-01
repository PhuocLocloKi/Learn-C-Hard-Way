#include <stdio.h>

/*
==================================================
RECURSION EXAMPLE: SUM FROM 1 TO N
==================================================

PROBLEM:
Calculate sum = 1 + 2 + 3 + ... + n

RECURSIVE IDEA:
sum(n) = n + sum(n - 1)

BASE CASE:
sum(0) = 0
==================================================
*/

int sum(int n);

int main() {

    int number = 5;

    int result = sum(number);

    printf("Sum from 1 to %d = %d\n", number, result);

    return 0;
}


/*
--------------------------------------------------
FUNCTION DEFINITION
--------------------------------------------------
*/
int sum(int n) {

    /*
        BASE CASE:
        When n == 0, stop recursion
    */
    if (n == 0) {
        return 0;
    }

    /*
        RECURSIVE CASE:
        n + sum(n - 1)
    */
    return n + sum(n - 1);
}
