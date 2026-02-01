#include <stdio.h>

/*
==================================================
PASS STRING TO FUNCTION IN C
==================================================
This file explains:
- How strings are passed to functions
- char[] vs char*
- Modifying string inside function
==================================================
*/

/*
-----------------------------------------------
FUNCTION 1: READ-ONLY STRING
-----------------------------------------------
*/
void printString(char *str) {
    /*
        str is a pointer to first character
        We should NOT modify string here
    */

    printf("String inside function: %s\n", str);
}

/*
-----------------------------------------------
FUNCTION 2: MODIFY STRING CONTENT
-----------------------------------------------
*/
void makeUpperCase(char *str) {

    /*
        Loop through string until '\0'
        and modify each character
    */

    int i = 0;
    while (str[i] != '\0') {

        // ASCII trick: a-z → A-Z
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }

        i++;
    }
}

/*
-----------------------------------------------
FUNCTION 3: STRING LENGTH (MANUAL)
-----------------------------------------------
*/
int stringLength(char *str) {

    int count = 0;

    while (*str != '\0') {
        count++;
        str++; // pointer arithmetic
    }

    return count;
}

int main() {

    /*
    -----------------------------------------------
    PART 1: PASS STRING ARRAY TO FUNCTION
    -----------------------------------------------
    */

    char name[] = "kungfutech";

    printString(name);

    /*
    -----------------------------------------------
    PART 2: MODIFY STRING THROUGH FUNCTION
    -----------------------------------------------
    */

    makeUpperCase(name);

    printf("After modification: %s\n", name);

    /*
        name is changed permanently
        because function worked on original memory
    */

    /*
    -----------------------------------------------
    PART 3: STRING LENGTH VIA FUNCTION
    -----------------------------------------------
    */

    int len = stringLength(name);
    printf("String length: %d\n", len);

    /*
    -----------------------------------------------
    PART 4: DANGEROUS CASE (STRING LITERAL)
    -----------------------------------------------
    */

    char *ptr = "hello";

    /*
        printString(ptr);   // OK (read-only)
        makeUpperCase(ptr); // ❌ UNDEFINED BEHAVIOR
    */

    return 0;
}


