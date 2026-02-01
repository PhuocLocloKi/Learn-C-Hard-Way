//2. Sum All Element Number
// Enter a positive integer n

// Calculate the sum of the units of that number
// Example:
// n = 1234:

// result = 10;


#include <stdio.h>

int main() {

    int n;

    // Input a positive integer
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    int sum = 0;

    // Loop until n becomes 0
    while (n > 0) {

        // Get the last digit of n
        int digit = n % 10;

        // Add the digit to sum
        sum += digit;

        // Remove the last digit from n
        n /= 10;
    }

    // Print the result
    printf("Result = %d\n", sum);

    return 0;
}
