#include <stdio.h>

/*
==================================================
UPPER & LOWER TRIANGLE OF A MATRIX
==================================================

THEORY:

Lower triangle:
- Elements where column <= row
- j <= i

Upper triangle:
- Elements where column >= row
- j >= i
==================================================
*/

int main() {

    int n = 4;
    int matrix[4][4] = {
        {3, 1, 0, 7},
        {2, 5, 10, 3},
        {3, 17, 4, 1},
        {10, 2, 0, 11}
    };

    int lowerSum = 0;
    int upperSum = 0;

    // Traverse entire matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {

            // Lower triangle condition
            if (j <= i) {
                lowerSum += matrix[i][j];
            }

            // Upper triangle condition
            if (j >= i) {
                upperSum += matrix[i][j];
            }
        }
    }

    printf("Lower triangle sum = %d\n", lowerSum);
    printf("Upper triangle sum = %d\n", upperSum);

    return 0;
}
