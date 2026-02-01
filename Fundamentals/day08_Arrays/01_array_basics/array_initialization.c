#include <stdio.h>

/*
==================================================
ARRAY INITIALIZATION
==================================================
Assign values to array elements
==================================================
*/

int main() {

    /*
    -----------------------------------------------
    PARTIAL INITIALIZATION
    -----------------------------------------------
    */

    int arr[6] = {11, 7, 9};
    /*
        Only first 3 elements are initialized:

        arr[0] = 11
        arr[1] = 7
        arr[2] = 9

        Remaining elements are automatically set to 0:

        arr[3] = 0
        arr[4] = 0
        arr[5] = 0
    */

    /*
    -----------------------------------------------
    PRINT ARRAY USING LOOP
    -----------------------------------------------
    */

    for (int i = 0; i < 6; i++) {
        printf("%5d", arr[i]);
        /*
            arr[i] accesses the i-th element
            Loop allows us to visit all elements
        */
    }

    return 0;
}
