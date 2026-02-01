#include <stdio.h>

/*
==================================================
SPIRAL MATRIX - FIBONACCI
==================================================

THEORY:
- Fibonacci sequence:
  F(0)=0, F(1)=1
  F(n)=F(n-1)+F(n-2)

- Steps:
  1. Generate Fibonacci numbers
  2. Store them in an array
  3. Fill spiral matrix using that array
==================================================
*/

int main() {

    int n = 4;
    long long a[4][4];      // Matrix
    long long fib[100];     // Fibonacci numbers

    // Initialize Fibonacci sequence
    fib[0] = 0;
    fib[1] = 1;

    // Generate Fibonacci numbers
    for (int i = 2; i < n * n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    int top = 0, bottom = n - 1;
    int left = 0, right = n - 1;
    int index = 0;

    // Fill spiral matrix with Fibonacci numbers
    while (top <= bottom && left <= right) {

        for (int j = left; j <= right; j++) {
            a[top][j] = fib[index++];
        }
        top++;

        for (int i = top; i <= bottom; i++) {
            a[i][right] = fib[index++];
        }
        right--;

        for (int j = right; j >= left; j--) {
            a[bottom][j] = fib[index++];
        }
        bottom--;

        for (int i = bottom; i >= top; i--) {
            a[i][left] = fib[index++];
        }
        left++;
    }

    // Print Fibonacci spiral matrix
    printf("Spiral Fibonacci Matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%8lld", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
