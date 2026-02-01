#include <stdio.h>

/*
==================================================
RETURN FUNCTIONS IN C
==================================================

WHAT IS A RETURN FUNCTION?

- A return function is a function that RETURNS a value.
- The returned value is sent back to the caller.
- Used for calculations and logic processing.

SYNTAX:

    return_type functionName(parameters) {
        // code
        return value;
    }

IMPORTANT RULES:
1. return type must match returned value
2. return immediately ends the function
==================================================
*/


/*
--------------------------------------------------
FUNCTION PROTOTYPES
--------------------------------------------------
*/
int add(int a, int b);
int getNumberFromUser();


/*
--------------------------------------------------
MAIN FUNCTION
--------------------------------------------------
*/
int main() {

    /*
        1️⃣ Call a function WITH parameters
        and WITH return value
    */
    int result = add(10, 20);
    printf("Result from add() = %d\n", result);

    /*
        2️⃣ Call a function with NO parameters
        but WITH return value
    */
    int userNumber = getNumberFromUser();
    printf("Number entered by user = %d\n", userNumber);

    return 0;
}


/*
--------------------------------------------------
FUNCTION DEFINITIONS
--------------------------------------------------
*/

/*
Function: add
- Parameters: two integers
- Return type: int
- Purpose: calculate sum and return it
*/
int add(int a, int b) {

    /*
        Perform calculation
    */
    int sum = a + b;

    /*
        return sends the value back to main()
        and stops function execution
    */
    return sum;
}


/*
Function: getNumberFromUser
- No parameters
- Return type: int
- Purpose: read a number from keyboard and return it
*/
int getNumberFromUser() {

    int number;

    /*
        Ask user for input
    */
    printf("Enter a number: ");
    scanf("%d", &number);

    /*
        Return the input value
    */
    return number;
}
