#include <stdio.h>
#include <string.h>

/*
===========================================================
CHARACTER FREQUENCY USING ASCII TABLE
===========================================================

THEORY:
- Every character in C has an ASCII value (0 → 255)
- We use an integer array cnt[256]
- Index   = ASCII value of character
- Value   = frequency of that character

This is the MOST IMPORTANT string technique in C
===========================================================
*/

int main() {

    char str[300] = "C programming is powerful!";

    // Array to count frequency of all ASCII characters
    int cnt[256] = {0};

    // Traverse each character in the string
    for (int i = 0; i < strlen(str); i++) {

        // Convert character to unsigned char to avoid negative index
        unsigned char ch = str[i];

        // Increase frequency
        cnt[ch]++;
    }

    // Print all characters that appear at least once
    for (int i = 0; i < 256; i++) {

        if (cnt[i] > 0) {
            printf("'%c' appears %d times\n", i, cnt[i]);
        }
    }

    return 0;
}
