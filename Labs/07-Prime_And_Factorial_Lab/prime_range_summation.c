
//14 sumPrime
//Input start and end
//Calculate the sum of prime numbers in the range

//from start to end

#include <stdio.h>

int main() {

    int start, end;

    // Input start value
    printf("Enter start: ");
    scanf("%d", &start);

    // Input end value
    printf("Enter end: ");
    scanf("%d", &end);

    // Ensure start is always less than or equal to end
    if (start > end) {
        int temp = start;
        start = end;
        end = temp;
    }

    int sum = 0;

    // Loop through all numbers from start to end
    for (int i = start; i <= end; i++) {

        int isPrime = 1;   // Assume i is prime

        // Prime numbers must be >= 2
        if (i < 2) {
            isPrime = 0;
        } else {
            // Check divisibility
            for (int j = 2; j * j <= i; j++) {
                if (i % j == 0) {
                    isPrime = 0;  // Not a prime number
                    break;
                }
            }
        }

        // If i is prime, add it to sum
        if (isPrime) {
            sum += i;
        }
    }

    // Output the sum of prime numbers
    printf("Sum of prime numbers from start to end: %d\n", sum);

    return 0;
}

