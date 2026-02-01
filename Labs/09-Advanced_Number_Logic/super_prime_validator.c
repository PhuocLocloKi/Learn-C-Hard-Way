// Check if an integer entered from the keyboard is a superprime number

//Superprime number
#include <stdio.h>

int main() {

    int number;
    
    // Input an integer number
    scanf("%d", &number);

    // Process digits from right to left
    while (number > 0) {

        int isPrime = 1; // Flag to check if current number is prime

        // Check if the current number is prime
        for (int i = 2; i <= number - 1; i++) {
            if (number % i == 0) {
                isPrime = 0; // Not a prime number
                break;
            }
        }

        // If current number is not prime, it is not a super prime
        if (isPrime == 0) {
            printf("0");
            return 0; // Exit program immediately
        }

        // Remove the last digit
        number = number / 10;
    }

    // If all prefixes are prime
    printf("1");

    return 0;
}
