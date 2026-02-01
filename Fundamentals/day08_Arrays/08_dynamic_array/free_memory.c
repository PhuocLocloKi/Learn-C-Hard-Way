#include <stdio.h>
#include <stdlib.h>

/*
==================================================
FREE DYNAMIC MEMORY
==================================================

THEORY:
- malloc(), calloc(), realloc() allocate memory
- They DO NOT free memory automatically
- free() must be called to avoid MEMORY LEAK

Syntax:
    free(pointer)

IMPORTANT RULES:
- After free(), pointer becomes dangling
- Best practice: set pointer = NULL
==================================================
*/

int main() {

    int n = 5;

    // Allocate memory
    int *arr = (int*) malloc(n * sizeof(int));

    // Check allocation
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Assign values
    for (int i = 0; i < n; i++) {
        arr[i] = (i + 1) * 100;
    }

    // Print values
    printf("Before free:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Free allocated memory
    free(arr);
    /*
        Memory is returned to heap
        arr still holds old address (dangling pointer)
    */

    // Good practice
    arr = NULL;

    printf("\n\nMemory freed successfully.\n");

    return 0;
}
