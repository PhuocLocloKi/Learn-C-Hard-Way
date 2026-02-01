#include <stdio.h>

/*
==================================================
FUNCTION OVERVIEW – BASIC FUNCTIONS IN C
==================================================

WHAT IS A FUNCTION?

A function is a block of code that performs a specific task.

- A function runs ONLY when it is called
- A function can be called many times
- A function helps avoid code repetition

--------------------------------------------------
IMPORTANT FACT:
Every C program starts executing from main().
--------------------------------------------------

WHY FUNCTIONS ARE IMPORTANT?

1. Code reuse       → write once, use many times
2. Readability      → code is easier to understand
3. Maintainability  → easier to fix and update

--------------------------------------------------
GENERAL FUNCTION STRUCTURE:

    return_type function_name(parameters) {
        // code
        return value;
    }

- return_type : data type returned by the function
- parameters  : input values (can be empty)
==================================================
*/


/*
--------------------------------------------------
FUNCTION PROTOTYPES
--------------------------------------------------
These declarations tell the compiler
which functions exist in this program.
*/

// Function with no parameters and no return value
void greetUser();

// Function with parameters and no return value
void printSum(int a, int b);

// Function with parameters and return value
int add(int a, int b);

// Function with no parameters but return value
int getFixedNumber();


/*
--------------------------------------------------
MAIN FUNCTION
--------------------------------------------------
Program execution always starts here.
*/
int main() {

    /*
        1️⃣ Calling a function with NO parameters
        and NO return value
    */
    greetUser();

    /*
        2️⃣ Calling a function WITH parameters
        but NO return value
    */
    printSum(3, 7);

    /*
        3️⃣ Calling a function WITH parameters
        and WITH return value
    */
    int result = add(10, 20);
    printf("Result from add() = %d\n", result);

    /*
        4️⃣ Calling a function with NO parameters
        but WITH return value
    */
    int number = getFixedNumber();
    printf("Fixed number = %d\n", number);

    /*
        End of main function
    */
    return 0;
}


/*
--------------------------------------------------
FUNCTION DEFINITIONS
--------------------------------------------------
*/


/*
--------------------------------------------------
Function 1: greetUser
--------------------------------------------------
- No parameters
- No return value
- Purpose: print a greeting message
*/
void greetUser() {

    printf("Hello! Welcome to C Functions.\n");

    /*
        This function does not return anything
        because return type is void
    */
}


/*
--------------------------------------------------
Function 2: printSum
--------------------------------------------------
- Parameters: two integers
- No return value
- Purpose: calculate and print the sum
*/
void printSum(int a, int b) {

    /*
        a and b are PARAMETERS
        They receive values when the function is called
    */
    int sum = a + b;

    printf("Sum of %d and %d is %d\n", a, b, sum);

    /*
        This function performs an action (printing),
        so it does not need to return a value
    */
}


/*
--------------------------------------------------
Function 3: add
--------------------------------------------------
- Parameters: two integers
- Return value: integer
- Purpose: calculate sum and return it
*/
int add(int a, int b) {

    /*
        Calculate the sum
    */
    int sum = a + b;

    /*
        return sends the value back to the caller
        and ends the function execution
    */
    return sum;
}


/*
--------------------------------------------------
Function 4: getFixedNumber
--------------------------------------------------
- No parameters
- Return value: integer
- Purpose: return a fixed number
*/
int getFixedNumber() {

    /*
        This function does not need input
        It simply returns a value
    */
    return 100;
}
