
#include <stdio.h>
#include <string.h>

/*
=========================================
STRING BASIC CONCEPT
=========================================

- A string is a char array
- Ends with '\0'
- '\0' tells C where the string stops
=========================================
*/

int main() {

    // String created using double quotes
    char s1[] = "Hello";

    // String created using character list
    char s2[] = {'H', 'e', 'l', 'l', 'o', '\0'};

    // String with fixed size
    char s3[20] = "C Programming";

    // Print entire strings
    printf("s1 = %s\n", s1);
    printf("s2 = %s\n", s2);
    printf("s3 = %s\n", s3);

    /*
    -----------------------------------------
    Traversing string character by character
    -----------------------------------------
    */

    printf("\nCharacters in s1:\n");

    // strlen(s1) returns number of characters (excluding '\0')
    for (int i = 0; i < strlen(s1); i++) {

        // s1[i] accesses each character
        printf("s1[%d] = %c\n", i, s1[i]);
    }

    /*
    -----------------------------------------
    Understanding '\0'
    -----------------------------------------
    */

    // Printing ASCII value of last character
    printf("\nASCII of '\\0' is: %d\n", s1[strlen(s1)]);

    return 0;
}
