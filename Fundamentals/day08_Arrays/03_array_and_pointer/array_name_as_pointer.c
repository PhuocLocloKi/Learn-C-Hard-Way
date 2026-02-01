#include <stdio.h>

/*
==================================================
ARRAY NAME AS POINTER
==================================================

KEY THEORY:

- Array name IS a pointer
- It stores address of the FIRST element
- It is a CONSTANT pointer (cannot move)
==================================================
*/

int main() {

    /*
    -----------------------------------------------
    DECLARE ARRAY
    -----------------------------------------------
    */

    int arr[6] = {11, 7, 9};

    /*
        Memory (example):

        arr[0] = 11
        arr[1] = 7
        arr[2] = 9
        arr[3] = 0   (default)
        arr[4] = 0
        arr[5] = 0
    */

    /*
    -----------------------------------------------
    PRINT VALUES
    -----------------------------------------------
    */

    printf("arr[0] = %d\n", arr[0]);
    printf("arr[1] = %d\n", arr[1]);

    /*
    -----------------------------------------------
    PRINT ADDRESSES
    -----------------------------------------------
    */

    printf("&arr[0] = %p\n", &arr[0]);
    printf("&arr[1] = %p\n", &arr[1]);

    /*
    -----------------------------------------------
    ARRAY NAME ITSELF
    -----------------------------------------------
    */

    printf("arr = %p\n", arr);

    /*
    -----------------------------------------------
    THEORY SUMMARY
    -----------------------------------------------

    arr      == &arr[0]
    arr holds address of first element
    arr is a CONSTANT pointer

    You CANNOT do:
        arr++

    -----------------------------------------------
    */

    return 0;
}
