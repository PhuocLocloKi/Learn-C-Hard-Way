#include <stdio.h>

/*
==================================================
STANDARD LIBRARY FUNCTION: printf()
==================================================

WHAT IS printf()?

- printf() is a standard library function
- It is used to print formatted output to the console
- Defined in the header file <stdio.h>

WHY printf() IS IMPORTANT?

- Used in almost every C program
- Helps debug programs
- Displays results to users

SYNTAX:

    printf("format string", variables...);
==================================================
*/

int main() {

    /*
        Printing a simple text
    */
    printf("Hello, C Functions!\n");

    /*
        Printing integers
    */
    int a = 10;
    int b = 20;
    printf("a = %d, b = %d\n", a, b);

    /*
        Printing floating-point numbers
    */
    float pi = 3.14f;
    printf("pi = %.2f\n", pi);

    /*
        Printing multiple data types
    */
    int age = 21;
    float height = 1.70;
    printf("Age: %d, Height: %.2f meters\n", age, height);

    /*
        Format specifiers summary:
        %d  -> int
        %f  -> float / double
        %.2f -> float with 2 decimal places
        %c  -> char
        %s  -> string
    */

    return 0;
}
