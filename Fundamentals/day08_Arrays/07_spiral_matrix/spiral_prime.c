#include <stdio.h>

/*
==================================================
SPIRAL MATRIX - BASIC
==================================================

THEORY:
- A spiral matrix fills numbers in a spiral order
- Starting from the top-left corner
- Direction:
  → left to right
  ↓ top to bottom
  ← right to left
  ↑ bottom to top

We use 4 boundaries:
- top    (h1)
- bottom (h2)
- left   (c1)
- right  (c2)

After finishing one "layer":
- top++
- bottom--
- left++
- right--
==================================================
*/

int main() {

    int n = 5;                  // Size of square matrix (5x5)
    int a[5][5];                // Declare 2D matrix

    int top = 0;                // Top boundary
    int bottom = n - 1;         // Bottom boundary
    int left = 0;               // Left boundary
    int right = n - 1;          // Right boundary

    int value = 1;              // Value to insert into matrix

    // Continue while boundaries are valid
    while (top <= bottom && left <= right) {

        // 1️⃣ Fill top row (left → right)
        for (int j = left; j <= right; j++) {
            a[top][j] = value;
            value++;
        }
        top++;  // Move top boundary down

        // 2️⃣ Fill right column (top → bottom)
        for (int i = top; i <= bottom; i++) {
            a[i][right] = value;
            value++;
        }
        right--; // Move right boundary left

        // 3️⃣ Fill bottom row (right → left)
        for (int j = right; j >= left; j--) {
            a[bottom][j] = value;
            value++;
        }
        bottom--; // Move bottom boundary up

        // 4️⃣ Fill left column (bottom → top)
        for (int i = bottom; i >= top; i--) {
            a[i][left] = value;
            value++;
        }
        left++; // Move left boundary right
    }

    // Print spiral matrix
    printf("Spiral Matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
