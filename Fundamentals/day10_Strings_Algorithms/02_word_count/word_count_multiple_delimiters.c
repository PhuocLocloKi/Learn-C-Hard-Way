#include <stdio.h>
#include <string.h>

/*
=========================================================
FILE: word_count_multiple_delimiters.c
=========================================================

THEORY:
- Words may be separated by:
    space, comma, dot, exclamation, question mark
- strtok() supports MULTIPLE delimiters

DELIMITERS USED:
" ,.!?"
=========================================================
*/

int main() {

    // String contains punctuation and spaces
    char str[200] = "C, programming! is.fun? really awesome";

    int count = 0;

    // Split string using multiple delimiters
    char *token = strtok(str, " ,.!?");

    // Loop through all tokens
    while (token != NULL) {

        count++;    // Each token is one word

        // Continue tokenizing
        token = strtok(NULL, " ,.!?");
    }

    printf("Total words: %d\n", count);

    return 0;
}
