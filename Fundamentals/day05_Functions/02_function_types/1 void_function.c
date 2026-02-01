#include <stdio.h>

/*
==================================================
VOID FUNCTIONS IN C
==================================================

WHAT IS A VOID FUNCTION?

- A void function is a function that DOES NOT return a value.
- It is used when the function only performs an action:
  + Printing
  + Displaying
  + Processing data without sending a result back

SYNTAX:

    void functionName(parameters) {
        // code
    }

IMPORTANT:
- void functions use NO return value
- return; is optional
==================================================
*/


/*
--------------------------------------------------
FUNCTION PROTOTYPES
--------------------------------------------------
*/
void sayHello();
void printSum(int a, int b);


/*
--------------------------------------------------
MAIN FUNCTION
--------------------------------------------------
*/
int main() {

    /*
        1️⃣ Call a void function with NO parameters
    */
    sayHello();

    /*
        2️⃣ Call a void function WITH parameters
    */
    printSum(4, 6);

    /*
        main() ends here
    */
    return 0;
}


/*
--------------------------------------------------
FUNCTION DEFINITIONS
--------------------------------------------------
*/

/*
Function: sayHello
- No parameters
- No return value
- Purpose: print a greeting message
*/
void sayHello() {

    printf("Hello! This is a void function.\n");

    /*
        This function does not return anything.
        After executing this line, control goes
        back to the caller (main).
    */
}


/*
Function: printSum
- Parameters: two integers
- No return value
- Purpose: calculate and print the sum
*/
void printSum(int a, int b) {

    /*
        a and b receive values from main()
        a = 4, b = 6
    */
    int sum = a + b;

    printf("Sum of %d and %d is %d\n", a, b, sum);

    /*
        No return statement is required
        because this is a void function
    */
}
