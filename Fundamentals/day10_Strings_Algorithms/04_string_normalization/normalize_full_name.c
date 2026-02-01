#include <stdio.h>
#include <string.h>
#include <ctype.h>

/*
========================================================
FULL NAME NORMALIZATION
========================================================

INPUT:
"   nGUyeN   PHuoC   lOc   "

OUTPUT:
"Nguyen Phuoc Loc"

KEY IDEAS:
- strtok() to split words
- toupper() + tolower()
- strcat() to rebuild string
========================================================
*/

int main() {

    char name[300] = "   nGUyeN   PHuoC   lOc   ";
    char result[300] = "";

    // Split string by spaces
    char *token = strtok(name, " ");

    while (token != NULL) {

        // Capitalize first letter
        token[0] = toupper(token[0]);

        // Lowercase remaining characters
        for (int i = 1; i < strlen(token); i++) {
            token[i] = tolower(token[i]);
        }

        // Append word to result
        strcat(result, token);

        // Move to next word
        token = strtok(NULL, " ");

        // Add space if not last word
        if (token != NULL) {
            strcat(result, " ");
        }
    }

    printf("Normalized name: %s\n", result);

    return 0;
}
