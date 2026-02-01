//✅ Version 1: Basic & Clear (Recommended for beginners)
#include <stdio.h>

int main() {

    int n;
    int count = 0;

    // Input a positive integer n
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    // Loop from 1 to n
    for (int i = 1; i <= n; i++) {

        // Check if the number is even
        if (i % 2 == 0) {
            count++;   // Increase even number counter
        }
    }

    // Output the result
    printf("Number of even numbers from 1 to %d is: %d\n", n, count);

    return 0;
}
