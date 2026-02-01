#include <stdio.h>
#include <math.h>

/*
=========================================
COUNT PRIME NUMBERS IN MATRIX
=========================================
Combine:
- 2D array
- Function
- Math logic
=========================================
*/

#define COLS 4

/*
-----------------------------------------
Check prime number
-----------------------------------------
*/
int isPrime(int number) {

    // Numbers < 2 are NOT prime
    if (number < 2)
        return 0;

    // Check from 2 to sqrt(number)
    for (int i = 2; i <= sqrt(number); i++) {

        if (number % i == 0)
            return 0;
    }

    return 1;
}

/*
-----------------------------------------
Count prime numbers in matrix
-----------------------------------------
*/
int countPrime(int matrix[][COLS], int rows) {

    int count = 0;

    // Traverse matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < COLS; j++) {

            // Check if current element is prime
            if (isPrime(matrix[i][j])) {
                count++;
            }
        }
    }

    return count;
}

int main() {

    int rows = 3;

    int matrix[3][COLS] = {
        {2,  4,  6,  7},
        {11, 15, 18, 19},
        {23, 24, 25, 29}
    };

    /*
    -------------------------------------
    Call function
    -------------------------------------
    */
    int result = countPrime(matrix, rows);

    printf("Number of prime elements = %d\n", result);

    return 0;
}
