#include <stdio.h>

/*
==================================================
TRAVERSE ARRAY WITH POINTER
==================================================

GOAL:

- Use pointer to loop through array
- Pointer moves, array name does NOT
==================================================
*/

int main() {

    int arr[5] = {3, 8, 4, 2, 9};

    /*
    -----------------------------------------------
    DECLARE POINTER
    -----------------------------------------------
    */

    int *ptr = arr;

    /*
        ptr starts at arr[0]
    */

    printf("Traverse array using pointer:\n");

    for (int i = 0; i < 5; i++) {

        /*
            *ptr -> value at current position
            ptr  -> address
        */

        printf("Value = %d | Address = %p\n", *ptr, ptr);

        /*
            Move pointer to next element
            sizeof(int) = 4 bytes
        */
        ptr++;
    }

    /*
    -----------------------------------------------
    IMPORTANT DIFFERENCE
    -----------------------------------------------

    arr  -> constant pointer (cannot move)
    ptr  -> normal pointer (can move)

    -----------------------------------------------
    */

    return 0;
}
