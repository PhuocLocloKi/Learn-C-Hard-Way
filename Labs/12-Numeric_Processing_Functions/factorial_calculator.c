#include <stdio.h>

// Function to calculate factorial of a number
int factorial(int number);

int main() {
    int number;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check for invalid input
    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 0;
    }

    // Call factorial function
    int result = factorial(number);

    // Print result
    printf("Result = %d", result);

    return 0;
}

// Function definition
int factorial(int number) {
    int result = 1;

    // Calculate factorial using loop
    for (int i = 1; i <= number; i++) {
        result *= i;
    }

    return result;
}
