#include <stdio.h>
#include <string.h>
#include <ctype.h>

/*
========================================================
EMAIL GENERATION WITH NAME NORMALIZATION
========================================================

PROBLEMS HANDLED:
- Extra spaces
- Mixed upper/lower case
- Invalid formatting

Example:
"   nGUyeN   PHuoC   lOc   "
→ locnp@company.com
========================================================
*/

int main() {

    char name[300] = "   nGUyeN   PHuoC   lOc   ";
    char words[10][50];
    int count = 0;

    // Convert all characters to lowercase
    for (int i = 0; i < strlen(name); i++) {
        name[i] = tolower(name[i]);
    }

    // Split words using strtok
    char *token = strtok(name, " ");
    while (token != NULL) {

        strcpy(words[count], token);
        count++;

        token = strtok(NULL, " ");
    }

    printf("Normalized email:\n");

    // Print last word first
    printf("%s", words[count - 1]);

    // Print initials
    for (int i = 0; i < count - 1; i++) {
        printf("%c", words[i][0]);
    }

    printf("@company.com\n");

    return 0;
}
