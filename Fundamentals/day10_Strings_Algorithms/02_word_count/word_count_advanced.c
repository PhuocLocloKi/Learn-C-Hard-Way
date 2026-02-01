#include <stdio.h>
#include <ctype.h>     // isalpha()
#include <string.h>

/*
=========================================================
FILE: word_count_advanced.c
=========================================================

THEORY:
- Count only VALID words
- Ignore:
    + digits
    + punctuation
    + multiple spaces

CONCEPT:
- Use a flag `inWord`
- Transition from NOT IN WORD -> IN WORD means:
  => New word detected
=========================================================
*/

// Check if character belongs to a word
int isWordChar(char c) {
    // Only alphabetic characters are considered part of words
    return isalpha(c);
}

// Advanced word counting function
int countWords(char str[]) {

    int count = 0;     // Number of words
    int inWord = 0;    // Flag: 0 = outside word, 1 = inside word

    // Traverse string character by character
    for (int i = 0; str[i] != '\0'; i++) {

        if (isWordChar(str[i])) {

            // Entering a word
            if (inWord == 0) {
                count++;       // New word found
                inWord = 1;    // Mark that we're inside a word
            }

        } else {
            // Non-word character means exiting a word
            inWord = 0;
        }
    }

    return count;
}

int main() {

    char str[300];

    printf("Enter text: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline
    str[strcspn(str, "\n")] = '\0';

    // Print advanced result
    printf("Advanced word count: %d\n", countWords(str));

    return 0;
}
