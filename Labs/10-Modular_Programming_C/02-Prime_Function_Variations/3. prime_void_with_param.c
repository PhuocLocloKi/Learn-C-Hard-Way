// Check whether a number is prime
// Function type: void return - with input parameter

#include <stdio.h>

void checkPrime(int number);

int main() {
    int number;

    printf("Enter a number to check: ");
    scanf("%d", &number);

    checkPrime(number);
    return 0;
}

void checkPrime(int number) {
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
