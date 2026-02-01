#include <stdio.h>
#include <math.h>

/*
==================================================
STANDARD LIBRARY FUNCTION: sqrt()
==================================================

WHAT IS sqrt()?

- sqrt() calculates the square root of a number
- Defined in <math.h>
- Returns a double value

SYNTAX:

    double sqrt(double x);

IMPORTANT:
- You MUST include <math.h>
- You MUST compile with -lm
==================================================
*/

int main() {

    double number = 9.0;

    /*
        Calling sqrt()
        sqrt(9.0) returns 3.0
    */
    double result = sqrt(number);

    printf("Square root of %.2f is %.2f\n", number, result);

    /*
        Another example
    */
    printf("Square root of 16 is %.2f\n", sqrt(16.0));

    return 0;
}

/*
==================================================
HOW TO COMPILE THIS FILE:

gcc sqrt_function.c -o sqrt_function -lm
==================================================
*/
