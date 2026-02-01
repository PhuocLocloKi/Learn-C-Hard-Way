/*
==================================================
SWAP TWO VARIABLES USING A TEMPORARY VARIABLE
==================================================

PROBLEM:
- Given two integers a and b
- Swap their values with each other

EXAMPLE:
Input:
    a = 50
    b = 100

Output:
    a = 100
    b = 50

IDEA:
- Use a temporary variable to store one value
- Exchange values step by step without losing data
==================================================
*/

#include <stdio.h>

int main() {

    int a, b;

    // Input value for variable a
    printf("Enter value of a: ");
    scanf("%d", &a);

    // Input value for variable b
    printf("Enter value of b: ");
    scanf("%d", &b);

    /*
    -----------------------------------------------
    SWAP PROCESS
    -----------------------------------------------
    */

    // Step 1: Store the value of 'a' into a temporary variable
    int temp = a;

    // Step 2: Assign the value of 'b' to 'a'
    // Now 'a' holds the original value of 'b'
    a = b;

    // Step 3: Assign the stored value (original 'a') to 'b'
    b = temp;

    /*
    -----------------------------------------------
    OUTPUT RESULT
    -----------------------------------------------
    */

    // Display the swapped values
    printf("After swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}
