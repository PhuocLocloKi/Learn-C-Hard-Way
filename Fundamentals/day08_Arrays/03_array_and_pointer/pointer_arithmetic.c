#include <stdio.h>

/*
==================================================
POINTER ARITHMETIC
==================================================

IMPORTANT:

- Pointer arithmetic depends on data type
- int pointer jumps 4 bytes
- char pointer jumps 1 byte
==================================================
*/

int main() {

    int arr[4] = {10, 20, 30, 40};

    /*
    -----------------------------------------------
    POINTER POINTING TO ARRAY
    -----------------------------------------------
    */

    int *ptr = arr;

    /*
        ptr = arr
        ptr points to arr[0]
    */

    printf("ptr       = %p\n", ptr);
    printf("ptr + 1   = %p\n", ptr + 1);
    printf("ptr + 2   = %p\n", ptr + 2);

    /*
    -----------------------------------------------
    ACCESS VALUES USING POINTER ARITHMETIC
    -----------------------------------------------
    */

    printf("*ptr       = %d\n", *ptr);        // arr[0]
    printf("*(ptr+1)   = %d\n", *(ptr + 1));  // arr[1]
    printf("*(ptr+2)   = %d\n", *(ptr + 2));  // arr[2]

    /*
    -----------------------------------------------
    GOLDEN FORMULA (MUST MEMORIZE)
    -----------------------------------------------

    arr[i]   == *(arr + i)
    &arr[i]  == arr + i

    -----------------------------------------------
    */

    return 0;
}
