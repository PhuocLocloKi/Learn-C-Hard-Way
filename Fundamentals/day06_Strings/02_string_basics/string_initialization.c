#include <stdio.h>

/*
==================================================
STRING INITIALIZATION
==================================================
This file explains:
- Different ways to initialize strings
- Correct vs incorrect initialization
==================================================
*/

int main() {

    /*
    -----------------------------------------------
    METHOD 1: Automatic size initialization
    -----------------------------------------------
    */

    // Compiler automatically adds '\0'
    char str1[] = "Hello";

    /*
    -----------------------------------------------
    METHOD 2: Fixed size initialization
    -----------------------------------------------
    */

    // Enough space for characters + '\0'
    char str2[10] = "Hello";

    /*
    -----------------------------------------------
    METHOD 3: Manual character initialization
    -----------------------------------------------
    */

    // Must manually add '\0'
    char str3[] = {'H', 'e', 'l', 'l', 'o', '\0'};

    /*
    -----------------------------------------------
    DANGEROUS CASE (DO NOT DO THIS)
    -----------------------------------------------
    */

    /*
        char str4[5] = "Hello";

        "Hello" needs 6 characters:
        H e l l o \0

        But array size is only 5
        → Memory overflow
        → Undefined behavior
    */

    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);
    printf("str3: %s\n", str3);

    return 0;
}
