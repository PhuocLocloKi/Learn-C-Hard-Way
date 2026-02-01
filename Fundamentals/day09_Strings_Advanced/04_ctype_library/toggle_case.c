#include <stdio.h>
#include <string.h>
#include <ctype.h>

/*
====================================================
TOGGLE CHARACTER CASE
====================================================

THEORY:
- islower() checks lowercase
- isupper() checks uppercase
- tolower() converts to lowercase
- toupper() converts to uppercase

LOGIC:
- lowercase → uppercase
- uppercase → lowercase
- other characters remain unchanged
====================================================
*/

int main() {

    char str[200] = "C ProGRamMing 2024!!!";

    // Traverse string character by character
    for (int i = 0; i < strlen(str); i++) {

        // If character is lowercase
        if (islower(str[i])) {
            str[i] = toupper(str[i]);
        }
        // If character is uppercase
        else if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        }
        // Digits & symbols stay the same
    }

    printf("After toggle case:\n%s\n", str);

    return 0;
}
