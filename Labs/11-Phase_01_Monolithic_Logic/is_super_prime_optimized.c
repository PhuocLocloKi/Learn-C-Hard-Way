//Check the raw number if it is a raw number, print out 1 and then print 0 (capacity)

// Check whether a number is a super prime number
// If it is super prime, print 1
// Otherwise, print 0

#include <stdio.h>

// Check if a number is prime
int isPrime(int number);

// Check if a number is super prime
int isSuperPrime(int number);

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (isSuperPrime(number)) {
        printf("1\n");   // Super prime
    } else {
        printf("0\n");   // Not super prime
    }

    return 0;
}

// Function to check prime number
int isPrime(int number) {
    // Numbers less than 2 are not prime
    if (number < 2) {
        return 0;
    }

    // Check divisibility up to sqrt(number)
    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            return 0; // Not prime
        }
    }

    return 1; // Prime
}

// Function to check super prime number
int isSuperPrime(int number) {
    // Process each prefix of the number
    while (number > 0) {
        // If any prefix is not prime, return false
        if (!isPrime(number)) {
            return 0;
        }
        // Remove the last digit
        number /= 10;
    }

    return 1; // All prefixes are prime
}

