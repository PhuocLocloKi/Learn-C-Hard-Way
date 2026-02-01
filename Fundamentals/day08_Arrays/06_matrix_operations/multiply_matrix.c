#include <stdio.h>

/*
==================================================
MATRIX MULTIPLICATION (VERY DETAILED VERSION)
==================================================

THEORY (IMPORTANT – READ FIRST):

1. Matrix multiplication rule:
   - If matrix A has size: rowsA x colsA
   - If matrix B has size: rowsB x colsB
   - Then multiplication is POSSIBLE only if:
         colsA == rowsB

2. Result matrix C will have size:
         rowsA x colsB

3. Formula to calculate each element:
         C[i][j] = A[i][0]*B[0][j]
                 + A[i][1]*B[1][j]
                 + ...
                 + A[i][k]*B[k][j]

   => This is why we NEED 3 loops.

4. This concept is VERY IMPORTANT:
   - Used in math
   - Used in graphics
   - Used in AI / ML
==================================================
*/

int main() {

    /*
    ----------------------------------------------
    STEP 1: DECLARE MATRICES
    ----------------------------------------------
    */

    // Matrix A has 2 rows and 3 columns
    int A[2][3] = {
        {1, 2, 3},   // Row 0
        {4, 5, 6}    // Row 1
    };

    // Matrix B has 3 rows and 2 columns
    int B[3][2] = {
        {7,  8},     // Row 0
        {9,  10},    // Row 1
        {11, 12}     // Row 2
    };

    /*
    Why multiplication is valid?
    - A columns = 3
    - B rows    = 3
    => OK
    */

    // Result matrix C will be: 2 rows x 2 columns
    int C[2][2];

    /*
    ----------------------------------------------
    STEP 2: INITIALIZE RESULT MATRIX TO ZERO
    ----------------------------------------------

    VERY IMPORTANT:
    - If we do not set C[i][j] = 0 first
    - It may contain garbage values
    */

    for (int i = 0; i < 2; i++) {          // Loop through rows of C
        for (int j = 0; j < 2; j++) {      // Loop through columns of C
            C[i][j] = 0;                   // Reset before accumulation
        }
    }

    /*
    ----------------------------------------------
    STEP 3: MATRIX MULTIPLICATION LOGIC
    ----------------------------------------------

    Loop explanation:

    i -> row index of matrix A and C
    j -> column index of matrix B and C
    k -> index to move across:
         - columns of A
         - rows of B
    */

    for (int i = 0; i < 2; i++) {
        // i = 0 → row 0 of A
        // i = 1 → row 1 of A

        for (int j = 0; j < 2; j++) {
            // j = 0 → column 0 of B
            // j = 1 → column 1 of B

            for (int k = 0; k < 3; k++) {
                /*
                CORE OPERATION:

                Example when i = 0, j = 0:

                C[0][0] =
                    A[0][0] * B[0][0] +
                    A[0][1] * B[1][0] +
                    A[0][2] * B[2][0]

                k runs from 0 → 2 (3 times)
                */

                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    /*
    ----------------------------------------------
    STEP 4: PRINT RESULT MATRIX
    ----------------------------------------------
    */

    printf("Result matrix C:\n");

    for (int i = 0; i < 2; i++) {          // Rows of C
        for (int j = 0; j < 2; j++) {      // Columns of C
            printf("%4d", C[i][j]);        // Print each element
        }
        printf("\n");                      // New row
    }

    /*
    Expected Output:
    ----------------
    58   64
    139  154

    Because:
    C[0][0] = 1*7 + 2*9 + 3*11 = 58
    C[0][1] = 1*8 + 2*10 + 3*12 = 64
    C[1][0] = 4*7 + 5*9 + 6*11 = 139
    C[1][1] = 4*8 + 5*10 + 6*12 = 154
    */

    return 0;
}
