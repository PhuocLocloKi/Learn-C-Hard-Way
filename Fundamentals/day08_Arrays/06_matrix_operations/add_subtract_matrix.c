#include <stdio.h>
// Include standard input-output library
// Needed for printf()

/*
==================================================
ADD & SUBTRACT TWO MATRICES
==================================================

THEORY:
- Two matrices can be added or subtracted
  ONLY if they have the same number of rows
  and the same number of columns.

WHY?
- Matrix operations are element-by-element
- Each element must have a matching position

FORMULAS:
- Addition:    C[i][j] = A[i][j] + B[i][j]
- Subtraction: D[i][j] = A[i][j] - B[i][j]
==================================================
*/

int main() {

    // Define number of rows and columns
    // These values will be used for all matrices
    int rows = 3, cols = 4;

    // Declare and initialize matrix A (3 rows, 4 columns)
    int A[3][4] = {
        {2, 3, 1, 4},   // Row 0
        {2, 2, 0, 7},   // Row 1
        {1, 3, 5, 1}    // Row 2
    };

    // Declare and initialize matrix B (same size as A)
    int B[3][4] = {
        {2, 0, 7, 8},   // Row 0
        {1, 3, 5, 2},   // Row 1
        {3, 2, 8, 1}    // Row 2
    };

    // Declare matrix to store addition result
    int sum[3][4];

    // Declare matrix to store subtraction result
    int diff[3][4];

    // Loop through each row
    for (int i = 0; i < rows; i++) {

        // Loop through each column of current row
        for (int j = 0; j < cols; j++) {

            // Add corresponding elements of A and B
            // Example: sum[0][1] = A[0][1] + B[0][1]
            sum[i][j] = A[i][j] + B[i][j];

            // Subtract corresponding elements of A and B
            // Example: diff[1][2] = A[1][2] - B[1][2]
            diff[i][j] = A[i][j] - B[i][j];
        }
    }

    // Print the sum matrix
    printf("Sum matrix:\n");

    // Traverse rows of sum matrix
    for (int i = 0; i < rows; i++) {

        // Traverse columns of sum matrix
        for (int j = 0; j < cols; j++) {

            // Print each element with width 4
            // Helps align matrix output nicely
            printf("%4d", sum[i][j]);
        }

        // Move to next line after printing one row
        printf("\n");
    }

    // Print the difference matrix
    printf("Difference matrix:\n");

    // Traverse rows of difference matrix
    for (int i = 0; i < rows; i++) {

        // Traverse columns of difference matrix
        for (int j = 0; j < cols; j++) {

            // Print each element of diff matrix
            printf("%4d", diff[i][j]);
        }

        // New line after each row
        printf("\n");
    }

    // End of program
    return 0;
}
