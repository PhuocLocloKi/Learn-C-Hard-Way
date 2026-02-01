#include <stdio.h>

/*
==================================================
ARRAY DECLARATION IN C
==================================================
An array is a collection of variables
- Same data type
- Stored in contiguous memory
==================================================
*/

int main() {

    /*
    -----------------------------------------------
    ARRAY DECLARATION
    -----------------------------------------------
    */

    int arr[6];
    /*
        int      : data type of each element
        arr      : array name
        [6]      : number of elements

        This creates 6 integer variables in memory:

        arr[0], arr[1], arr[2], arr[3], arr[4], arr[5]

        IMPORTANT:
        - Size is FIXED
        - Cannot change size later
    */

    /*
    -----------------------------------------------
    ARRAY INDEX RULE
    -----------------------------------------------
    */

    /*
        First element index = 0
        Last element index  = size - 1 = 5
    */

    return 0;
}
