// Check whether a number is prime
// Function type: int return - with input parameter

#include <stdio.h>

int checkIsPrime(int number);

int main() {
    int number;

    printf("Enter a number to check: ");
    scanf("%d", &number);

    int result = checkIsPrime(number);

    if (result == 1)
        printf("%d is a prime number.\n", number);
    else
        printf("%d is NOT a prime number.\n", number);

    return 0;
}

int checkIsPrime(int number) {
    if (number < 2)
        return 0;

    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0)
            return 0;
    }
    return 1;
}
