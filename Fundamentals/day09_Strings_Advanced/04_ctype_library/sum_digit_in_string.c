#include <stdio.h>
#include <string.h>
#include <ctype.h>

/*
====================================================
SUM OF DIGITS INSIDE A STRING
====================================================

THEORY:
- Digits are characters: '0' → '9'
- Convert char to number: digit - '0'

Example:
- '5' - '0' = 5
====================================================
*/

int main() {

    char str[200] = "C2024 Programming 123abc45";

    int sum = 0;

    for (int i = 0; i < strlen(str); i++) {

        // Check if character is a digit
        if (isdigit(str[i])) {
            sum += (str[i] - '0');  // Convert char → int
        }
    }

    printf("String: %s\n", str);
    printf("Sum of digits: %d\n", sum);

    return 0;
}
