//CheckPrime.c
//Enter a prime number, check if it is an integer
//What is a prime number?


//✅ Prime Number Check – Clean & Upgraded Version
#include <stdio.h>

int main() {

    int n;

    // Input an integer number
    printf("Enter an integer: ");
    scanf("%d", &n);

    // Numbers less than 2 are NOT prime
    if (n < 2) {
        printf("%d is NOT a prime number.\n", n);
        return 0;
    }

    // Check divisibility from 2 to n - 1
    for (int i = 2; i <= n - 1; i++) {

        // If n is divisible by i, it is NOT prime
        if (n % i == 0) {
            printf("%d is NOT a prime number.\n", n);
            return 0;   // Stop the program immediately
        }
    }

    // If no divisor is found, n is prime
    printf("%d is a prime number.\n", n);

    return 0;
}


//✅ Optimized Version (Faster – Best Practice)
#include <stdio.h>

int main() {

    int n;
    int isPrime = 1;   // Assume n is prime initially

    // Input number
    printf("Enter an integer: ");
    scanf("%d", &n);

    // Handle invalid cases
    if (n < 2) {
        printf("%d is NOT a prime number.\n", n);
        return 0;
    }

    // Only check up to sqrt(n)
    for (int i = 2; i * i <= n; i++) {

        // Found a divisor
        if (n % i == 0) {
            isPrime = 0;
            break;   // Exit loop early
        }
    }

    // Print result
    if (isPrime) {
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is NOT a prime number.\n", n);
    }

    return 0;
}
