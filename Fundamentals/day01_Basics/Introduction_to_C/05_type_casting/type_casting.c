#include <stdio.h>

int main() {
    // 1. Implicit Conversion (Safe: small to big)
    int a = 10;
    float b = a; // 10 becomes 10.000000

    // 2. Data Loss Risks
    long n = 5000000000L;
    int c = (int)n; // Overflow! Result will be incorrect
    printf("Overflow result: %d\n", c);

    double pi = 3.14;
    int int_pi = pi; // Decimal lost -> 3

    // 3. Explicit Casting (Solving the Division Problem)
    // Problem: int / int = int
    float wrong_avg = (8 + 9 + 11) / 3; // Result: 9.00
    
    // Solution: Cast one side to float
    float right_avg = (float)(8 + 9 + 11) / 3; // Result: 9.33
    printf("Correct Average: %.2f\n", right_avg);

    // 4. ASCII Conversion
    char text = 'B';
    printf("Char: %c, ASCII value: %d\n", text, text);

    return 0;
}