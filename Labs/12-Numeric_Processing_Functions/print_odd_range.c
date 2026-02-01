#include <stdio.h>

// Function to print all odd numbers from 1 to number
// Function type: int return - with input parameter
int printOddNumbers(int number);

int main() {
    int n;

    // Input value
    scanf("%d", &n);

    // Call function
    printOddNumbers(n);

    return 0;
}

int printOddNumbers(int number) {
    // Loop from 1 to number
    for (int i = 1; i <= number; i++) {
        // Check if the number is odd
        if (i % 2 != 0) {
            printf("%d\n", i);
        }
    }

    return 1; // Indicate successful execution
}
