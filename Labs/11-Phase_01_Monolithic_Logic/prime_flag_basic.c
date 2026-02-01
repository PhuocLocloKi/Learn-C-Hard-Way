//Check the integer number if it is a integer number that prints 1 and then prints 0


// Check whether a number is prime
// If prime -> print 1
// Otherwise -> print 0

#include <stdio.h>

int main() {
    int number;
    int isPrime = 1;   // Assume the number is prime (1 = true, 0 = false)

    printf("Enter a number: ");
    scanf("%d", &number);

    // Numbers less than or equal to 1 are not prime
    if (number <= 1) {
        isPrime = 0;
    } else {
        // Check divisibility from 2 to number - 1
        for (int i = 2; i <= number - 1; i++) {
            if (number % i == 0) {
                isPrime = 0; // Found a divisor -> not prime
                break;       // Stop checking further
            }
        }
    }

    // Print result: 1 if prime, 0 if not prime
    printf("%d", isPrime);

    return 0;
}
