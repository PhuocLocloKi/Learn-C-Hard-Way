#include <stdio.h>

/*
==================================================
ARRAY AND POINTER - BASIC CONCEPT
==================================================

VERY IMPORTANT RULE IN C:

- An array name is a pointer to its first element
- array == &array[0]

This is NOT a coincidence.
This is how arrays are implemented in memory.

==================================================
*/

int main() {

    /*
    ----------------------------------------------
    1. DECLARE AN ARRAY
    ----------------------------------------------
    */

    int arr[5] = {10, 20, 30, 40, 50};

    /*
        arr is an array of 5 integers

        Memory layout (conceptually):

        arr[0]  arr[1]  arr[2]  arr[3]  arr[4]
          10      20      30      40      50

        Stored CONTIGUOUSLY in memory
    */

    /*
    ----------------------------------------------
    2. PRINT ADDRESSES
    ----------------------------------------------
    */

    printf("Address of array (arr): %p\n", arr);
    printf("Address of first element (&arr[0]): %p\n", &arr[0]);

    /*
        These two are the SAME address

        Why?
        - arr points to the first element of the array
    */

    /*
    ----------------------------------------------
    3. ACCESS ELEMENTS USING POINTER SYNTAX
    ----------------------------------------------
    */

    printf("\nAccess array elements:\n");

    printf("arr[0] = %d\n", arr[0]);
    printf("*arr   = %d\n", *arr);

    /*
        arr[0] == *arr
        Because arr == &arr[0]
    */

    printf("arr[1] = %d\n", arr[1]);
    printf("*(arr + 1) = %d\n", *(arr + 1));

    /*
        arr[1] == *(arr + 1)
    */

    /*
    ----------------------------------------------
    4. IMPORTANT SUMMARY
    ----------------------------------------------

    arr        → address of first element
    &arr[0]   → address of first element
    *arr      → value of first element
    arr[i]    → *(arr + i)

    ----------------------------------------------
    */

    return 0;
}
