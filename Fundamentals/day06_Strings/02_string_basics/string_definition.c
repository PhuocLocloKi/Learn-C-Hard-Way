#include <stdio.h>

/*
==================================================
STRING DEFINITION IN C
==================================================
This file explains:
- What a string is
- How string is stored in memory
- The importance of '\0'
==================================================
*/

int main() {

    /*
    -----------------------------------------------
    STEP 1: Declare a string
    -----------------------------------------------
    */

    // Declare a string using character array
    char name[] = "ABC";

    /*
        Memory layout:

        name[0] = 'A'
        name[1] = 'B'
        name[2] = 'C'
        name[3] = '\0'   ← VERY IMPORTANT
    */

    /*
    -----------------------------------------------
    STEP 2: Print string and characters
    -----------------------------------------------
    */

    // Print the entire string
    printf("String: %s\n", name);

    // Print individual characters
    printf("Character 0: %c\n", name[0]);
    printf("Character 1: %c\n", name[1]);
    printf("Character 2: %c\n", name[2]);

    /*
    -----------------------------------------------
    STEP 3: Show null terminator
    -----------------------------------------------
    */

    // '\0' is not visible, but it exists
    printf("Null terminator ASCII value: %d\n", name[3]);

    return 0;
}
