// Given a 2-digit number
// Check if the 2 digits are prime numbers
// If both digits are prime numbers

// Print 1, otherwise print 0

#include <stdio.h>

int main() {

    int n;

    // Input a two-digit number
    printf("Enter a two-digit number: ");
    scanf("%d", &n);

    // Convert to positive in case user enters negative number
    if (n < 0) {
        n = -n;
    }

    // Check if the number has exactly two digits
    if (n < 10 || n > 99) {
        printf("0");   // Not a valid two-digit number
        return 0;
    }

    // Extract two digits
    int tens = n / 10;     // First digit
    int units = n % 10;    // Second digit

    int isPrimeTens = 1;
    int isPrimeUnits = 1;

    // Check if the first digit is prime
    if (tens < 2) {
        isPrimeTens = 0;
    } else {
        for (int i = 2; i * i <= tens; i++) {
            if (tens % i == 0) {
                isPrimeTens = 0;
                break;
            }
        }
    }

    // Check if the second digit is prime
    if (units < 2) {
        isPrimeUnits = 0;
    } else {
        for (int i = 2; i * i <= units; i++) {
            if (units % i == 0) {
                isPrimeUnits = 0;
                break;
            }
        }
    }

    // If both digits are prime, print 1, otherwise print 0
    if (isPrimeTens && isPrimeUnits) {
        printf("1");
    } else {
        printf("0");
    }

    return 0;
}
