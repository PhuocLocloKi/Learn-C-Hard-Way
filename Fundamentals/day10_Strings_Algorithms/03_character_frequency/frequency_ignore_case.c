#include <stdio.h>
#include <string.h>
#include <ctype.h>

/*
=========================================================
FILE: frequency_ignore_case.c
=========================================================

THEORY:
- 'A' and 'a' should be counted as the SAME
- Convert all characters to lowercase first
- Use tolower() from <ctype.h>
=========================================================
*/

int main() {

    char str[200] = "C Programming Is Powerful";

    int cnt[256] = {0};

    for (int i = 0; i < strlen(str); i++) {

        // Convert character to lowercase
        char c = tolower(str[i]);

        cnt[(unsigned char)c]++;
    }

    // Print result
    for (int i = 0; i < 256; i++) {
        if (cnt[i] > 0) {
            printf("'%c' appears %d times\n", i, cnt[i]);
        }
    }

    return 0;
}
