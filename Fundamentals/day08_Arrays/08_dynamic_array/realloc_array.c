#include <stdio.h>
#include <stdlib.h>

/*
==================================================
DYNAMIC ARRAY USING realloc()
==================================================

THEORY:
- realloc() = re-allocation
- Used to resize previously allocated memory
- Old values are PRESERVED
- New memory area contains garbage values

Syntax:
    ptr = (type*) realloc(ptr, new_size_in_bytes)
==================================================
*/

int main() {

    int n = 5;

    // Allocate initial array
    int *arr = (int*) malloc(n * sizeof(int));

    // Check allocation
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Initialize values
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }

    printf("Before realloc:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Resize array to larger size
    int newSize = 10;
    arr = (int*) realloc(arr, newSize * sizeof(int));
    /*
        realloc:
        - keeps old values
        - adds new memory after old block
    */

    // Assign values to new part
    for (int i = n; i < newSize; i++) {
        arr[i] = i + 1;
    }

    printf("\n\nAfter realloc:\n");
    for (int i = 0; i < newSize; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
