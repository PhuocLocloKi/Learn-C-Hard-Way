#include <stdio.h>

/*
==================================================
ARRAY ACCESS & MEMORY BEHAVIOR
==================================================
This file explains WHY array name is a pointer
==================================================
*/

int main() {

    int arr[6] = {11, 7, 9};

    /*
    -----------------------------------------------
    PRINT VALUES OF ARRAY ELEMENTS
    -----------------------------------------------
    */

    for (int i = 0; i < 6; i++) {
        printf("%5d", arr[i]);
        /*
            arr[i] means:
            value stored at index i
        */
    }

    /*
    -----------------------------------------------
    ACCESS INDIVIDUAL ELEMENTS
    -----------------------------------------------
    */

    printf("\n\narr[0] = %d", arr[0]);
    printf("\narr[1] = %d", arr[1]);

    /*
    -----------------------------------------------
    MEMORY ADDRESSES
    -----------------------------------------------
    */

    printf("\n\nAddress of arr[0] = %p", &arr[0]);
    printf("\nAddress of arr[1] = %p", &arr[1]);

    /*
        Address difference between arr[0] and arr[1]
        = sizeof(int) bytes (usually 4 bytes)
    */

    /*
    -----------------------------------------------
    ARRAY NAME BEHAVIOR
    -----------------------------------------------
    */

    printf("\n\nValue of arr (array name) = %p", arr);
    printf("\nAddress of arr itself     = %p", &arr);

    /*
    IMPORTANT THEORY (CORE CONCEPT):

    - arr is NOT a variable
    - arr is a constant pointer
    - arr stores the address of arr[0]

    That means:
        arr      == &arr[0]
        arr + 1  == &arr[1]
        *(arr)   == arr[0]
        *(arr+1) == arr[1]

    This is WHY:
    - Arrays
    - Pointers
    - Strings
    - Dynamic memory

    are deeply connected in C
    */

    return 0;
}
