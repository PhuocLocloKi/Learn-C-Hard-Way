//6/ Enter an integer n >= 2

//mulOddEven
//Calculate the even/odd product in the range from 1 to n - 1
//Example: 5
//MulEven = 8
//MulOdd = 3

#include <stdio.h>

int main() {

    int n;

    // Input an integer n (n >= 2)
    printf("Enter an integer n (n >= 2): ");
    scanf("%d", &n);

    int mulEven = 1; // Stores the product of even numbers
    int mulOdd  = 1; // Stores the product of odd numbers

    // Loop from 1 to n - 1
    for (int i = 1; i <= n - 1; i++) {

        // Check if the number is even
        if (i % 2 == 0) {
            mulEven *= i;   // Multiply even numbers
        } 
        // Otherwise, the number is odd
        else {
            mulOdd *= i;    // Multiply odd numbers
        }
    }

    // Output results
    printf("MulEven = %d\n", mulEven);
    printf("MulOdd  = %d\n", mulOdd);

    return 0;
}
