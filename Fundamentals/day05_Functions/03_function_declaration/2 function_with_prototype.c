#include <stdio.h>

/*
==================================================
FUNCTION DECLARATION – WITH PROTOTYPE
==================================================

WHAT IS A FUNCTION PROTOTYPE?

- A function prototype is a declaration of a function
- It tells the compiler:
  + Function name
  + Return type
  + Parameter types

WHY DO WE NEED A PROTOTYPE?

- Compiler reads code from top to bottom
- main() may call a function BEFORE its definition
- Prototype informs the compiler in advance

THIS IS THE STANDARD WAY USED IN REAL PROGRAMS
==================================================
*/


/*
--------------------------------------------------
FUNCTION PROTOTYPE
--------------------------------------------------
Only declaration, NO function body here
*/
int add(int a, int b);


/*
--------------------------------------------------
MAIN FUNCTION
--------------------------------------------------
*/
int main() {

    /*
        The compiler knows add() because of the prototype
        even though the function definition is below main()
    */
    int result = add(20, 30);

    printf("Result = %d\n", result);

    return 0;
}


/*
--------------------------------------------------
FUNCTION DEFINITION
--------------------------------------------------
The actual implementation of the function
*/
int add(int a, int b) {

    int sum = a + b;

    return sum;
}
