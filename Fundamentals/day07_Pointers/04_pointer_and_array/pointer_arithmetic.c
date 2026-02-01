#include <stdio.h>

/*
==================================================
POINTER ARITHMETIC
==================================================

KEY IDEA:

- Pointer arithmetic depends on DATA TYPE
- pointer + 1 moves by sizeof(data_type)

For int:
- sizeof(int) = 4 bytes (usually)
- pointer + 1 moves 4 bytes forward

==================================================
*/

int main() {

    /*
    ----------------------------------------------
    1. DECLARE ARRAY
    ----------------------------------------------
    */

    int arr[5] = {1, 2, 3, 4, 5};

    /*
    ----------------------------------------------
    2. POINTER POINTING TO ARRAY
    ----------------------------------------------
    */

    int *p = arr;

    /*
        p points to arr[0]
        p == &arr[0]
    */

    /*
    ----------------------------------------------
    3. TRAVERSE ARRAY USING POINTER
    ----------------------------------------------
    */

    printf("Traverse array using pointer:\n");

    for (int i = 0; i < 5; i++) {

        printf("Address: %p | Value: %d\n", (p + i), *(p + i));

        /*
            (p + i)     → address of arr[i]
            *(p + i)    → value of arr[i]
        */
    }

    /*
    ----------------------------------------------
    4. POINTER ARITHMETIC VISUALIZATION
    ----------------------------------------------

    p       → arr[0]
    p + 1   → arr[1]
    p + 2   → arr[2]
    p + 3   → arr[3]

    Each step jumps sizeof(int) bytes

    ----------------------------------------------
    */

    return 0;
}
