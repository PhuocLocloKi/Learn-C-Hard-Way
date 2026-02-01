#include <stdio.h>

/*
==================================================
TRANSPOSE MATRIX
==================================================
Theory:
- Transpose swaps rows and columns
- Transpose of A (n x m) → AT (m x n)
- Rule: transpose[j][i] = original[i][j]
==================================================
*/

int main() {

    int rows = 2, cols = 3;
    int a[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    int t[3][2];

    // Build transpose
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            t[j][i] = a[i][j];
        }
    }

    printf("Transpose matrix:\n");
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d ", t[i][j]);
        }
        printf("\n");
    }

    return 0;
}
