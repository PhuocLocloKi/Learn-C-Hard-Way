#include <stdio.h>
#include <string.h>

/*
========================================================
TRIM LEFT & RIGHT SPACES ONLY
========================================================

THEORY:
- Trimming = remove spaces at beginning & end
- Do NOT touch spaces inside the sentence

Example:
"   hello   world   "
→ "hello   world"
========================================================
*/

int main() {

    char str[200] = "   hello   world   ";
    char result[200];

    int start = 0;
    int end = strlen(str) - 1;
    int index = 0;

    // Find first non-space from left
    while (str[start] == ' ') {
        start++;
    }

    // Find first non-space from right
    while (str[end] == ' ') {
        end--;
    }

    // Copy characters from start to end
    for (int i = start; i <= end; i++) {
        result[index++] = str[i];
    }

    // Add null terminator
    result[index] = '\0';

    printf("Trimmed string: '%s'\n", result);

    return 0;
}
