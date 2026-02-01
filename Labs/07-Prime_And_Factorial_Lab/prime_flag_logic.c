//Flag technique

#include <stdio.h>

int main() {

    int n;
    int isPrime = 1;   // Flag variable: 1 = prime, 0 = not prime
                       // Assume n is prime at the beginning

    // Input number
    printf("Enter n: ");
    scanf("%d", &n);

    // Numbers less than 2 are NOT prime
    if (n < 2) {
        printf("%d is NOT a prime number.\n", n);
        return 0;
    }

    // Check divisibility
    for (int i = 2; i <= n - 1; i++) {

        // If n has a divisor other than 1 and itself
        if (n % i == 0) {
            isPrime = 0;   // Set flag to false
            break;         // Exit loop immediately
        }
    }

    // Check flag value
    if (isPrime == 1) {
        printf("1 (Prime number)\n");
    } else {
        printf("0 (Not a prime number)\n");
    }

    return 0;
}
