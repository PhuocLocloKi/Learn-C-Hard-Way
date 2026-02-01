// Check whether a fixed number is prime
// Function type: int return - no input parameters

#include <stdio.h>

int checkIsPrime(void);

int main() {
    int result = checkIsPrime();

    if (result == 1)
        printf("The number is prime.\n");
    else
        printf("The number is NOT prime.\n");

    return 0;
}

int checkIsPrime(void) {
    int number = 10;

    if (number < 2)
        return 0;

    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0)
            return 0;
    }
    return 1;
}
