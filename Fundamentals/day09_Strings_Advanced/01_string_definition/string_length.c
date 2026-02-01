#include <stdio.h>
#include <string.h>

/*
=========================================
STRING LENGTH
=========================================

- strlen(): library function
- my_strlen(): custom implementation
=========================================
*/

// Custom function to calculate string length
int my_strlen(char str[]) {

    int count = 0;   // Counter for characters
    int i = 0;       // Index

    // Loop until null character is found
    while (str[i] != '\0') {
        count++;    // Increase character count
        i++;        // Move to next character
    }

    return count;   // Return total characters
}

int main() {

    char str[100];

    printf("Input string: ");

    // gets is used here ONLY for learning
    // In real projects, use fgets()
    gets(str);

    printf("\nString: %s", str);

    // strlen() from string.h
    printf("\nLength using strlen(): %d", strlen(str));

    // Custom length function
    printf("\nLength using my_strlen(): %d", my_strlen(str));

    return 0;
}

/*
Example memory layout:

"h e l l o \0"
 0 1 2 3 4  5

strlen() = 5
'\0' is NOT counted
*/
