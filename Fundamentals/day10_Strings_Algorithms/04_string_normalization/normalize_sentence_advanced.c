#include <stdio.h>
#include <string.h>
#include <ctype.h>

/*
========================================================
ADVANCED SENTENCE NORMALIZATION
========================================================

RULES:
- Remove extra spaces
- Capitalize first letter of sentence
- Lowercase remaining letters

Example:
"   hELLo   wORLD   "
→ "Hello world"
========================================================
*/

int main() {

    char str[300] = "   hELLo   wORLD   ";
    char result[300];

    int i = 0, j = 0;

    // Skip leading spaces
    while (str[i] == ' ') i++;

    // Capitalize first character
    result[j++] = toupper(str[i++]);

    while (str[i] != '\0') {

        if (str[i] != ' ') {

            // Lowercase characters
            result[j++] = tolower(str[i]);
        }
        else {
            // Add single space
            result[j++] = ' ';
            while (str[i] == ' ') i++;
            continue;
        }
        i++;
    }

    // Remove trailing space
    if (result[j - 1] == ' ') j--;

    result[j] = '\0';

    printf("Normalized sentence: %s\n", result);

    return 0;
}
