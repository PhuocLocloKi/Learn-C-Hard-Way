#include <stdio.h>
#include <math.h>

/*
==================================================
COMMON MATH FUNCTIONS IN C
==================================================

All functions below are defined in <math.h>

IMPORTANT:
- Return type is usually double
- Must compile with -lm
==================================================
*/

int main() {

    double x = 4.3;
    double y = 2.0;

    /*
        pow(x, y)
        Returns x raised to the power of y
    */
    printf("pow(%.2f, %.2f) = %.2f\n", x, y, pow(x, y));

    /*
        ceil(x)
        Rounds UP to the nearest integer
    */
    printf("ceil(%.2f) = %.2f\n", x, ceil(x));

    /*
        floor(x)
        Rounds DOWN to the nearest integer
    */
    printf("floor(%.2f) = %.2f\n", x, floor(x));

    /*
        fabs(x)
        Returns absolute value
    */
    printf("fabs(-10.5) = %.2f\n", fabs(-10.5));

    /*
        sqrt(x)
        Square root
    */
    printf("sqrt(25) = %.2f\n", sqrt(25.0));

    return 0;
}

/*
==================================================
HOW TO COMPILE THIS FILE:

gcc math_functions.c -o math_functions -lm
==================================================
*/
