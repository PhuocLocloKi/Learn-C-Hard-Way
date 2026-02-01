#include <stdio.h>
#include <string.h>

/*
=========================================================
FILE: word_count_manual.c
=========================================================

THEORY:
- We DO NOT use strtok()
- We scan the string character by character
- A word starts when:
    + current character != ' '
    + AND (previous is ' ' OR this is the first character)

KEY IDEA:
- Detect the START of a word, not the whole word
=========================================================
*/

// Function to count words manually
int countWords(char str[]) {

    int count = 0;     // Store number of words
    int i = 0;         // Index to traverse the string

    // Loop until end of string
    while (str[i] != '\0') {

        // Check if this position is the start of a word
        if (str[i] != ' ' &&            // Current char is NOT space
           (i == 0 || str[i - 1] == ' ')) { // Previous is space OR first char

            count++;    // Found a new word
        }

        i++;            // Move to next character
    }

    return count;       // Return total words
}

int main() {

    char str[200];

    // Ask user to input a sentence
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline '\n' added by fgets
    str[strcspn(str, "\n")] = '\0';

    // Call function and print result
    printf("Word count: %d\n", countWords(str));

    return 0;
}
