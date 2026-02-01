#include <stdio.h>     // printf()
#include <string.h>    // strtok()

/*
=========================================================
FILE: word_count_strtok.c
=========================================================

THEORY:
- A word is a sequence of characters separated by delimiters
- strtok() is used to split a string into tokens (words)
- Delimiters here: SPACE ' '

IMPORTANT:
- strtok() modifies the original string
- Each delimiter found is replaced by '\0'
=========================================================
*/

int main() {

    // Declare and initialize a string
    // Multiple spaces exist between words intentionally
    char str[200] = "C programming   is   very    powerful";

    int count = 0;     // Variable to count number of words

    // First call to strtok:
    // - Pass the string to be split
    // - " " means space is delimiter
    char *token = strtok(str, " ");

    // Loop until no token is found
    while (token != NULL) {

        // Each token represents ONE word
        count++;

        // Get the next word
        // NULL means: continue splitting the same string
        token = strtok(NULL, " ");
    }

    // Print result
    printf("Number of words: %d\n", count);

    return 0; // End program
}
