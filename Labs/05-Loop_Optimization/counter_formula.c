//✅ Version 2: Optimized Logic (Math Thinking)
#include <stdio.h>

int main() {

    int n;

    // Input a positive integer n
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    // Each two numbers contain one even number
    int count = n / 2;

    // Output the result
    printf("Number of even numbers from 1 to %d is: %d\n", n, count);

    return 0;
}
