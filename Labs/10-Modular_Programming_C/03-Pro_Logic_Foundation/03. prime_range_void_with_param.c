// Check prime numbers in range [start, end]
// Function type: void return - with input parameters

#include <stdio.h>

void checkPrimeRange(int start, int end);

int main() {
    int start, end;

    printf("Enter start: ");
    scanf("%d", &start);

    printf("Enter end: ");
    scanf("%d", &end);

    checkPrimeRange(start, end);
    return 0;
}

void checkPrimeRange(int start, int end) {
    if (start > end) {
        int temp = start;
        start = end;
        end = temp;
    }

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
