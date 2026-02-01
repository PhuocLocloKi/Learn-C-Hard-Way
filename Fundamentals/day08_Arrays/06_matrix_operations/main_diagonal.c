#include <stdio.h>

/*
==================================================
MAIN DIAGONAL OF A SQUARE MATRIX
==================================================

THEORY:
- Main diagonal elements satisfy:
      row index == column index
      a[i][i]

- Only exists clearly in a SQUARE matrix
  (rows == columns)

Example (4x4 matrix):
a[0][0], a[1][1], a[2][2], a[3][3]
==================================================
*/

int main() {

    int n = 4;   // Size of square matrix

    int matrix[4][4] = {
        {3, 1, 0, 7},
        {2, 5, 10, 3},
        {3, 7, 4, 1},
        {10, 2, 0, 11}
    };

    printf("Main diagonal elements:\n");

    // Loop through rows
    for (int i = 0; i < n; i++) {
        // Because row == column for main diagonal
        printf("%d ", matrix[i][i]);
    }

    return 0;
}
