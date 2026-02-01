#include <stdio.h>
#include <string.h>
#include <ctype.h>

/*
========================================================
CAPITALIZE EACH WORD
========================================================

THEORY:
- Uppercase first letter of each word
- Lowercase remaining letters
- Words separated by spaces

Example:
"c pROGRAMMING lanGUAGE"
→ "C Programming Language"
========================================================
*/

int main() {

    char str[300] = "c pROGRAMMING lanGUAGE";

    // Capitalize first character if it is a letter
    if (isalpha(str[0])) {
        str[0] = toupper(str[0]);
    }

    // Traverse string from second character
    for (int i = 1; i < strlen(str); i++) {

        // If previous char is space and current is letter
        if (str[i - 1] == ' ' && isalpha(str[i])) {

            // Capitalize word start
            str[i] = toupper(str[i]);
        }
        else {
            // Lowercase other letters
            str[i] = tolower(str[i]);
        }
    }

    printf("Capitalized: %s\n", str);

    return 0;
}
