// Calculate the sum of even numbers from 1 to n

#include <stdio.h>

// Function to calculate the sum of even numbers
int sumEven(int number);

int main() {
    int n;

    // Input value
    scanf("%d", &n);

    // Call function to calculate sum
    int result = sumEven(n);

    // Print result
    printf("Result: %d", result);

    return 0;
}

// Function definition
int sumEven(int number) {
    int sum = 0;

    // Loop from 1 to number
    for (int i = 1; i <= number; i++) {
        // Check if i is even
        if (i % 2 == 0) {
            sum += i; // Add even number to sum
        }
    }

    return sum;
}
