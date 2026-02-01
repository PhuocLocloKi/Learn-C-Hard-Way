#include <stdio.h>
#include <string.h>
#include <ctype.h>

/*
========================================================
BASIC EMAIL GENERATION
========================================================

THEORY:
- Email format example:
  lastName + first letter of middle names + first letter of first name
- All characters must be lowercase
- Spaces must be removed

Example:
"Nguyen Phuoc Loc"
→ locnp@company.com
========================================================
*/

int main() {

    // Original full name
    char name[200] = "Nguyen Phuoc Loc";

    // Convert entire string to lowercase
    for (int i = 0; i < strlen(name); i++) {
        name[i] = tolower(name[i]);
    }

    // Array to store separated words
    char words[10][50];
    int count = 0;

    // Split string into words
    char *token = strtok(name, " ");
    while (token != NULL) {

        // Copy each word into 2D array
        strcpy(words[count], token);
        count++;

        token = strtok(NULL, " ");
    }

    /*
        words[0] = "nguyen"
        words[1] = "phuoc"
        words[2] = "loc"
    */

    printf("Generated email:\n");

    // Print last name (actual given name)
    printf("%s", words[count - 1]);

    // Print initials of previous words
    for (int i = 0; i < count - 1; i++) {
        printf("%c", words[i][0]);
    }

    // Append domain
    printf("@company.com\n");

    return 0;
}
