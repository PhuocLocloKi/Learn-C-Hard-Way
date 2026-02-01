#include <stdio.h>

/*
==================================================
MULTIPLE PARAMETERS IN FUNCTIONS
==================================================

A function can receive MORE THAN ONE parameter.

RULES:
1. Parameters are separated by commas
2. Order of arguments MUST match parameters
3. Data types must match
==================================================
*/


/*
--------------------------------------------------
FUNCTION PROTOTYPE
--------------------------------------------------
This function receives TWO integers
and returns their sum.
*/
int add(int a, int b);


/*
--------------------------------------------------
MAIN FUNCTION
--------------------------------------------------
*/
int main() {

    int result1 = add(3, 5);
    printf("Result 1 = %d\n", result1);

    int x = 10;
    int y = 20;

    /*
        x is passed to a
        y is passed to b
    */
    int result2 = add(x, y);
    printf("Result 2 = %d\n", result2);

    return 0;
}


/*
--------------------------------------------------
FUNCTION DEFINITION
--------------------------------------------------
*/
int add(int a, int b) {

    /*
        a and b are PARAMETERS
        They receive values from arguments
    */
    int sum = a + b;

    return sum;
}
