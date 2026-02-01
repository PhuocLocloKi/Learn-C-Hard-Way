/*
Enter a positive integer n
Calculate the factorial of n
Enter n = 7
n! =
Hint 7! = 7654321
*/

#include <stdio.h>

int main() {

    int n;

    // Input a positive integer n
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    // Variable to store factorial result
    int factorial = 1;

    // Calculate factorial: n! = 1 * 2 * ... * n
    for (int i = 1; i <= n; i++) {
        factorial = factorial * i;
    }

    // Output the factorial result
    printf("Factorial of %d is: %d\n", n, factorial);

    return 0;
}



//✅ Upgraded version (input validation + clearer output)
#include <stdio.h>

int main() {

    int n;
    int factorial = 1;

    // Input value
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    // Check for invalid input
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 0;
    }

    // Calculate factorial
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }

    // Print result
    printf("%d! = %d\n", n, factorial);

    return 0;
}



//✅ Advanced version (step-by-step factorial display)
#include <stdio.h>

int main() {

    int n;
    long long factorial = 1;   // Use long long to handle larger values

    // Input n
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Invalid input. n must be non-negative.\n");
        return 0;
    }

    // Calculate factorial with detailed output
    printf("%d! = ", n);
    for (int i = n; i >= 1; i--) {
        factorial *= i;
        printf("%d", i);
        if (i != 1) {
            printf(" * ");
        }
    }

    printf(" = %lld\n", factorial);

    return 0;
}
