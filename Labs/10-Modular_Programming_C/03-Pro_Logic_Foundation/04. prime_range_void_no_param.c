// Check prime numbers in a predefined range
// Function type: void return - no input parameters

#include <stdio.h>

void checkPrimeRange(void);

int main() {
    checkPrimeRange();
    return 0;
}

void checkPrimeRange(void) {
    int start = 12;
    int end   = 19;

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
}
