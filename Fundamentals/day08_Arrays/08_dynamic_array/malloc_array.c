#include <stdio.h>
#include <stdlib.h>

/*
==================================================
DYNAMIC ARRAY USING malloc()
==================================================

THEORY:
- malloc() = memory allocation
- Allocates a block of memory at RUNTIME
- Memory is allocated in HEAP
- Values inside allocated memory are GARBAGE values

Syntax:
    ptr = (type*) malloc(number_of_elements * sizeof(type))

IMPORTANT:
- malloc() returns a void pointer (void*)
- Must be cast to correct data type
- Always check if malloc() returns NULL
==================================================
*/

int main() {

    int n = 5;  
    // Number of elements we want in the array

    // Declare a pointer that will act like an array
    int *arr;

    // Allocate memory for n integers dynamically
    arr = (int*) malloc(n * sizeof(int));
    /*
        malloc returns:
        - address of first byte of allocated memory
        - that address is stored inside arr

        arr behaves like an array:
        arr[0], arr[1], ...
    */

    // Check if memory allocation failed
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;   // Exit program
    }

    // Assign values to dynamic array
    for (int i = 0; i < n; i++) {
        arr[i] = (i + 1) * 10;
        // Same as: *(arr + i) = (i + 1) * 10;
    }

    // Print values
    printf("Dynamic array using malloc:\n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    // NOTE:
    // Memory is still allocated here
    // We MUST free it later (see free_memory.c)

    return 0;
}
