//Calculate the sum of even digits
//Example: 1234
//Sum = 2 + 4 = 6

#include <stdio.h>

int main() {

    int n;

    // Input an integer number
    printf("Enter an integer number: ");
    scanf("%d", &n);

    int digit;      // Store the last digit of the number
    int sum = 0;    // Store the sum of even digits

    // Loop through all digits of the number
    do {
        digit = n % 10;   // Get the last digit

        // Check if the digit is even
        if (digit % 2 == 0) {
            sum += digit; // Add even digit to sum
        }

        n /= 10; // Remove the last digit

    } while (n != 0);

    // Output the result
    printf("Sum of even digits = %d", sum);

    return 0;
}

