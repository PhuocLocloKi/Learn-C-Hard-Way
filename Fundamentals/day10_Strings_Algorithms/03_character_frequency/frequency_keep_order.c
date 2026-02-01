#include <stdio.h>
#include <string.h>

/*
=========================================================
FILE: frequency_keep_order.c
=========================================================

THEORY:
- First: count frequency using counting array
- Second: traverse string again
- Print only FIRST TIME a character appears
- Then mark it as printed (set count = 0)
=========================================================
*/

int main() {

    char str[200] = "banana apple";

    int cnt[256] = {0};

    // Step 1: Count frequency
    for (int i = 0; i < strlen(str); i++) {
        cnt[(unsigned char)str[i]]++;
    }

    // Step 2: Print characters in original order
    for (int i = 0; i < strlen(str); i++) {

        unsigned char c = str[i];

        // If this character has not been printed yet
        if (cnt[c] > 0) {

            printf("'%c' appears %d times\n", c, cnt[c]);

            // Mark as printed
            cnt[c] = 0;
        }
    }

    return 0;
}
