#include <stdio.h>
#include <stdlib.h>

/*
==================================================
DYNAMIC ARRAY USING calloc()
==================================================

THEORY:
- calloc() = contiguous allocation
- Similar to malloc()
- DIFFERENCE:
  + calloc initializes all values to 0
  + malloc gives garbage values

Syntax:
    ptr = (type*) calloc(number_of_elements, sizeof(type))
==================================================
*/

int main() {

    int n = 6;

    // Pointer for dynamic array
    int *arr;

    // Allocate memory using calloc
    arr = (int*) calloc(n, sizeof(int));
    /*
        calloc allocates:
        - n blocks
        - each block has size sizeof(int)
        - all elements initialized to 0
    */

    // Check allocation
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Print initial values (all zeros)
    printf("Initial values (calloc initializes to 0):\n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    // Modify values
    for (int i = 0; i < n; i++) {
        arr[i] = i * i;
    }

    // Print updated values
    printf("\nAfter assigning values:\n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    return 0;
}
