//Count the number of even numbers

//✅ Version 1 – Verbose (print each step, for learning)
#include <stdio.h>
int main() {

    int n;

    // Input a positive integer n
    printf("Enter a number: ");
    scanf("%d", &n);

    int count = 0; // Counter for even numbers

    // Loop from 1 to n
    for (int i = 1; i <= n; i++) {

        printf("Current value of i = %d\n", i);

        // Check if i is even
        if (i % 2 == 0) {

            count++; // Increase even number counter

            printf("Even number found: %d\n", i);
            printf("Current even count = %d\n", count);
        }

        printf("\n"); // Blank line for readability
    }

    // Final result
    printf("Total number of even numbers = %d\n", count);

    return 0;
}



//✅ Version 2 – Clean & Efficient (recommended)
#include <stdio.h>

int main() {

    int n;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &n);

    int count = 0; // Count even numbers

    // Iterate from 1 to n
    for (int i = 1; i <= n; i++) {

        // If i is divisible by 2, it is even
        if (i % 2 == 0) {
            count++;
        }
    }

    // Output total even numbers
    printf("Total even numbers from 1 to %d = %d\n", n, count);

    return 0;
}

