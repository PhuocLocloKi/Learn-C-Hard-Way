#include <stdio.h>

/*
=========================================
PASS 2D ARRAY TO FUNCTION
=========================================
IMPORTANT RULE:
- Number of columns MUST be fixed
=========================================
*/

#define COLS 4   // fixed column size

/*
-----------------------------------------
Function: printMatrix
-----------------------------------------
- matrix[][COLS] : 2D array parameter
- rows           : number of rows
-----------------------------------------
*/
void printMatrix(int matrix[][COLS], int rows) {

    // Traverse matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < COLS; j++) {

            printf("%4d", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {

    int rows = 3;

    // Declare 2D array
    int matrix[3][COLS] = {
        {1,  2,  3,  4},
        {5,  6,  7,  8},
        {9, 10, 11, 12}
    };

    /*
    -------------------------------------
    Pass 2D array to function
    -------------------------------------
    - Only pass array name
    - Array name = address of first row
    */
    printMatrix(matrix, rows);

    return 0;
}
