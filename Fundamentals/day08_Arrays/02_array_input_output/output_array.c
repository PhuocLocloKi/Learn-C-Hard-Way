#include <stdio.h>

/*
==================================================
ARRAY INPUT IN C
==================================================
This file focuses ONLY on:
- How to input array elements
- Why scanf needs &arr[i]
- Memory thinking behind arrays
==================================================
*/

int main() {

    /*
    -----------------------------------------------
    DECLARE ARRAY
    -----------------------------------------------
    */

    int arr[6];

    /*
        arr is an array of 6 integers
        Memory is allocated CONTIGUOUSLY
        arr[0] ... arr[5]
    */

    /*
    -----------------------------------------------
    INPUT ARRAY ELEMENTS
    -----------------------------------------------
    */

    printf("Enter 6 integers:\n");

    for (int i = 0; i < 6; i++) {

        /*
            VERY IMPORTANT THEORY:

            arr[i]   -> VALUE of element i
            &arr[i]  -> ADDRESS of element i

            scanf NEEDS an ADDRESS
            because it must STORE input value
            into memory
        */

        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    /*
    -----------------------------------------------
    MEMORY CHECK (OPTIONAL BUT IMPORTANT)
    -----------------------------------------------
    */

    printf("\nAddress of each element:\n");

    for (int i = 0; i < 6; i++) {

        /*
            Observe:
            - Addresses increase by sizeof(int)
            - Usually 4 bytes per int
        */

        printf("&arr[%d] = %p\n", i, &arr[i]);
    }

    return 0;
}
