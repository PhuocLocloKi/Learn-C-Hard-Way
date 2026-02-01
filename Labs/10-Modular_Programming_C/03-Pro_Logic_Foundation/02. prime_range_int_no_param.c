// Check prime numbers in a fixed range
// Function type: int return - no input parameters

#include <stdio.h>

int checkPrimeRange(void);

int main() {
    checkPrimeRange();
    return 0;
}

int checkPrimeRange(void) {
    int start = 10;
    int end   = 20;

    for (int i = start; i <= end; i++) {
        int isPrime = 1;

        if (i < 2)
            isPrime = 0;

        for (int j = 2; j * j <= i && isPrime; j++) {
            if (i % j == 0)
                isPrime = 0;
        }

        if (isPrime)
            printf("%d is a prime number.\n", i);
        else
            printf("%d is NOT a prime number.\n", i);
    }
    return 1;
}
