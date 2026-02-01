#include <stdio.h>
#include <string.h>

/*
==================================================
STRCAT FUNCTION
==================================================
Append one string to another
==================================================
*/

int main() {

    char first[50] = "Hello";
    char second[] = " World";

    strcat(first, second);

    printf("Result: %s\n", first);

    /*
        first must have enough space
        "Hello World\0"
    */

    return 0;
}
