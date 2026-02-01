#include <stdio.h>
#include <string.h>
#include <ctype.h>

/*
====================================================
CTYPE.H – CHARACTER CLASSIFICATION
====================================================

THEORY:
- ctype.h provides functions to CHECK character types
- These functions work on SINGLE characters, not strings

Common functions:
- isdigit()  → check digit (0–9)
- isalpha()  → check alphabet
- islower()  → lowercase letter
- isupper()  → uppercase letter
- isspace()  → space, tab, newline
- isalnum()  → digit OR letter
====================================================
*/

int main() {

    char str[200] = "C Programming 2024 !!!";

    int digits = 0;
    int letters = 0;
    int spaces = 0;
    int specials = 0;

    // Loop through each character of the string
    for (int i = 0; i < strlen(str); i++) {

        // Check if current character is a digit
        if (isdigit(str[i])) {
            digits++;
        }
        // Check if alphabet character
        else if (isalpha(str[i])) {
            letters++;
        }
        // Check if space character
        else if (isspace(str[i])) {
            spaces++;
        }
        // Remaining characters are special symbols
        else {
            specials++;
        }
    }

    // Output results
    printf("String: %s\n", str);
    printf("Letters : %d\n", letters);
    printf("Digits  : %d\n", digits);
    printf("Spaces  : %d\n", spaces);
    printf("Special : %d\n", specials);

    return 0;
}
