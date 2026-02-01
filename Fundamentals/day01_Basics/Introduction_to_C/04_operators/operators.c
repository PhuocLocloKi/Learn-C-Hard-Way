#include <stdio.h>

int main() {
    // 1. Arithmetic Operators
    int r = 5 + 3; // Addition
    int m = 5 * 3; // Multiplication
    int d = 5 % 3; // Modulo (Remainder) = 2

    // 2. Increment (++) and Decrement (--)
    int i = 9;
    int j = ++i; // Prefix: i becomes 10, then j = 10
    
    int x = 9;
    int y = x++; // Postfix: y = 9, then x becomes 10
    printf("Prefix: %d, Postfix: %d\n", j, y);

    // 3. Assignment Operators
    int index = 5;
    index += 4; // index = 9
    index *= 2; // index = 18
    index %= 5; // index = 3

    return 0;
}