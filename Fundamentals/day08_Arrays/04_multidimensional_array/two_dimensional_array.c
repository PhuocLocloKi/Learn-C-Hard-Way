#include <stdio.h>

/*
==================================================
NESTED LOOP TRAVERSAL
==================================================

KEY IDEA:

- 1 loop  -> 1D array
- 2 loops -> 2D array
- 3 loops -> 3D array

Nested loop = loop inside loop
==================================================
*/

int main() {

    /*
    -----------------------------------------------
    SIMPLE 2D ARRAY
    -----------------------------------------------
    */

    int a[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    /*
    -----------------------------------------------
    TRAVERSE USING NESTED LOOP
    -----------------------------------------------
    */

    for (int i = 0; i < 2; i++) {          // loop for ROW
        for (int j = 0; j < 3; j++) {      // loop for COLUMN
            printf("a[%d][%d] = %d\n", i, j, a[i][j]);
        }
    }

    /*
    -----------------------------------------------
    THEORY SUMMARY
    -----------------------------------------------

    Outer loop  -> controls ROW
    Inner loop -> controls COLUMN

    -----------------------------------------------
    */

    return 0;
}
