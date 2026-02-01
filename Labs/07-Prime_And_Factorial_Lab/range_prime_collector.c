//CountPrime
//Input start and end
//Print prime numbers in the range from start

//to end
//Example:

//User enters start = -2 and end = 6
//Check which numbers in the range -2 -1 0 1 2 3 4 5 6

//In that range are prime numbers
//If it is a prime number, print it to the screen

#include <stdio.h>

int main() {

    int start, end;

    // Input start value
    printf("Enter start: ");
    scanf("%d", &start);

    // Input end value
    printf("Enter end: ");
    scanf("%d", &end);

    // Swap values if start is greater than end
    if (start > end) {
        int temp = start;
        start = end;
        end = temp;
    }

    int count = 0;   // Count prime numbers

    // Loop through all numbers in the range [start, end]
    for (int i = start; i <= end; i++) {

        int isPrime = 1;   // Assume i is prime

        // Numbers less than 2 are NOT prime
        if (i < 2) {
            continue;
        }

        // Check divisibility from 2 to sqrt(i)
        for (int j = 2; j * j <= i; j++) {

            // If divisible, i is NOT prime
            if (i % j == 0) {
                isPrime = 0;
                break;   // Stop checking further
            }
        }

        // If i is prime, print it and increase count
        if (isPrime) {
            printf("%d ", i);
            count++;
        }
    }

    // Print total number of prime numbers
    printf("\nTotal prime numbers in range [%d, %d] = %d\n", start, end, count);

    return 0;
}
