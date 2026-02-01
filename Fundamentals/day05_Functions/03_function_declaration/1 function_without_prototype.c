#include <stdio.h>

/*
==================================================
FUNCTION DECLARATION – WITHOUT PROTOTYPE
==================================================

WHAT DOES "WITHOUT PROTOTYPE" MEAN?

- The function is defined BEFORE main()
- Because the compiler reads code from top to bottom,
  it already knows about the function when main() calls it

IMPORTANT:
- In this case, a function prototype is NOT required
==================================================
*/


/*
--------------------------------------------------
FUNCTION DEFINITION (BEFORE main)
--------------------------------------------------
This function is defined BEFORE main(),
so the compiler already knows it exists.
*/
int add(int a, int b) {

    /*
        a and b are parameters
        They receive values from the function call
    */
    int sum = a + b;

    return sum;
}


/*
--------------------------------------------------
MAIN FUNCTION
--------------------------------------------------
*/
int main() {

    /*
        The compiler already knows add()
        because it was defined above main()
    */
    int result = add(5, 10);

    printf("Result = %d\n", result);

    return 0;
}
