// Check whether a fixed number is prime
// Function type: void return - no input parameters

#include <stdio.h>

void checkIsPrime(void);

int main() {
    checkIsPrime();
    return 0;
}

void checkIsPrime(void) {
    int number = 18;

    if (number < 2) {
        printf("%d is NOT a prime number.\n", number);
        return;
    }

    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            printf("%d is NOT a prime number.\n", number);
            return;
        }
    }
    printf("%d is a prime number.\n", number);
}
