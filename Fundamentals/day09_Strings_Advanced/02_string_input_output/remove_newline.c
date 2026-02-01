#include <stdio.h>
#include <string.h>

/*
====================================================
REMOVE NEWLINE CHARACTER FROM STRING
====================================================

PROBLEM:
- fgets() keeps the '\n' character
- This causes problems when:
  + comparing strings
  + concatenating strings
  + processing input

SOLUTION:
- Replace '\n' with '\0'
====================================================
*/

int main() {

    // Declare string buffer
    char str[100];

    // Ask user for input
    printf("Enter a sentence: ");

    // Read input including newline
    fgets(str, 100, stdin);

    // Show original string
    printf("\nBefore removing newline:");
    printf("\nString: %s", str);
    printf("Length: %d\n", strlen(str));

    /*
    Check last character:
    - strlen(str) - 1 gives index of last character
    - If it is '\n', remove it
    */

    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0'; // Replace newline with null terminator
    }

    // Show modified string
    printf("\nAfter removing newline:");
    printf("\nString: %s\n", str);
    printf("Length: %d\n", strlen(str));

    /*
    RESULT:
    - Clean string
    - Safe for strcmp, strcat, processing
    */

    return 0; // End program
}
