#include <stdio.h>

/*
==================================================
MAIN DIAGONAL OF A MATRIX
==================================================
Theory:
- Only exists in a SQUARE matrix (rows == columns)
- Main diagonal elements satisfy: row index == column index
  → a[i][i]
==================================================
*/

int main() {

    int n = 3;
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printf("Main diagonal elements:\n");

    // Traverse rows
    for (int i = 0; i < n; i++) {
        // Access main diagonal element
        printf("%d ", matrix[i][i]);
    }

    return 0;
}
