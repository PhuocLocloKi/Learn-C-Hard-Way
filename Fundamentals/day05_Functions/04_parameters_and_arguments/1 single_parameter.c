#include <stdio.h>

/*
==================================================
PARAMETERS AND ARGUMENTS – SINGLE PARAMETER
==================================================

DEFINITIONS:

- Parameter:
  A variable defined in the function declaration.
  It receives values when the function is called.

- Argument:
  The actual value passed to the function when calling it.

EXAMPLE:
    void printNumber(int x);   // x is a PARAMETER
    printNumber(5);            // 5 is an ARGUMENT
==================================================
*/


/*
--------------------------------------------------
FUNCTION PROTOTYPE
--------------------------------------------------
This function takes ONE parameter (int number)
and does not return any value.
*/
void printNumber(int number);


/*
--------------------------------------------------
MAIN FUNCTION
--------------------------------------------------
*/
int main() {

    int value = 10;

    /*
        value is an ARGUMENT
        It is passed to the function
    */
    printNumber(value);

    /*
        You can also pass a literal value
    */
    printNumber(25);

    return 0;
}


/*
--------------------------------------------------
FUNCTION DEFINITION
--------------------------------------------------
*/
void printNumber(int number) {

    /*
        number is a PARAMETER
        It receives the argument value
    */
    printf("The number is: %d\n", number);
}

