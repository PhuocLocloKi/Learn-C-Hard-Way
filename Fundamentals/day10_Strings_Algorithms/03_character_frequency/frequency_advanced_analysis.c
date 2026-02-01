#include <stdio.h>
#include <string.h>
#include <ctype.h>

/*
=========================================================
FILE: frequency_advanced_analysis.c
=========================================================

THEORY:
- Count frequency of letters only (a-z)
- Ignore spaces, digits, special characters
- Case insensitive
- Use array of size 26 instead of 256
=========================================================
*/

int main() {

    char str[300] = "C Programming Is VERY Powerful!!!";

    // Array for 26 letters (a → z)
    int freq[26] = {0};

    for (int i = 0; i < strlen(str); i++) {

        if (isalpha(str[i])) {

            // Convert to lowercase
            char c = tolower(str[i]);

            // Map 'a' → 0, 'b' → 1, ..., 'z' → 25
            freq[c - 'a']++;
        }
    }

    // Print frequency of letters
    for (int i = 0; i < 26; i++) {

        if (freq[i] > 0) {
            printf("%c : %d times\n", i + 'a', freq[i]);
        }
    }

    return 0;
}
