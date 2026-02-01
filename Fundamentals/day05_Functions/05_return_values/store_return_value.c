#include <stdio.h>

/*
==================================================
STORING RETURN VALUES
==================================================

WHY STORE RETURN VALUES?

- Returned values are often used for:
  + Further calculations
  + Conditions (if, loop)
  + Storing results in variables or arrays

IMPORTANT:
- The variable type MUST match the return type
==================================================
*/


/*
--------------------------------------------------
FUNCTION PROTOTYPES
--------------------------------------------------
*/
int add(int a, int b);
int multiply(int a, int b);


/*
--------------------------------------------------
MAIN FUNCTION
--------------------------------------------------
*/
int main() {

    /*
        Store return value in variables
    */
    int sum = add(4, 6);
    int product = multiply(4, 6);

    printf("Sum = %d\n", sum);
    printf("Product = %d\n", product);

    /*
        Use return values in expressions
    */
    int total = add(1, 2) + multiply(3, 4);
    printf("Total = %d\n", total);

    return 0;
}


/*
--------------------------------------------------
FUNCTION DEFINITIONS
--------------------------------------------------
*/
int add(int a, int b) {

    return a + b;
}


int multiply(int a, int b) {

    return a * b;
}
