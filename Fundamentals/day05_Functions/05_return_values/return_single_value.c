#include <stdio.h>

/*
==================================================
RETURN VALUES IN C – SINGLE RETURN VALUE
==================================================

WHAT IS A RETURN VALUE?

- A return value is a value sent back from a function
  to the place where it was called.
- The keyword "return" is used for this purpose.

IMPORTANT RULES:
1. A function can return ONLY ONE value
2. The return type must match the function return type
3. return immediately ends the function execution

SYNTAX:

    return_type functionName(parameters) {
        return value;
    }
==================================================
*/


/*
--------------------------------------------------
FUNCTION PROTOTYPE
--------------------------------------------------
This function receives an integer
and returns its square.
*/
int square(int number);


/*
--------------------------------------------------
MAIN FUNCTION
--------------------------------------------------
*/
int main() {

    int value = 5;

    /*
        Calling the function square()
        The returned value is stored in result
    */
    int result = square(value);

    printf("Square of %d is %d\n", value, result);

    return 0;
}


/*
--------------------------------------------------
FUNCTION DEFINITION
--------------------------------------------------
*/
int square(int number) {

    /*
        Calculate square
    */
    int result = number * number;

    /*
        Send the value back to main()
        After return, this function stops executing
    */
    return result;
}
