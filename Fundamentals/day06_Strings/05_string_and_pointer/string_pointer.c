#include <stdio.h>

/*
==================================================
STRING AND POINTER IN C
==================================================
This file explains:
- Relationship between string and pointer
- char[] vs char*
- Pointer arithmetic on strings
==================================================
*/

int main() {

    /*
    -----------------------------------------------
    PART 1: STRING AS CHARACTER ARRAY
    -----------------------------------------------
    */

    char name[] = "Kungfutech";

    /*
        Memory:
        K u n g f u t e c h \0
        ^ 
        name (address of first character)
    */

    printf("String using array: %s\n", name);
    printf("First character: %c\n", name[0]);
    printf("First character (pointer): %c\n", *name);

    /*
        name[0] == *(name)
    */

    /*
    -----------------------------------------------
    PART 2: POINTER ITERATION OVER STRING
    -----------------------------------------------
    */

    char *ptr = name;

    printf("\nIterating string using pointer:\n");

    while (*ptr != '\0') {
        printf("%c ", *ptr);
        ptr++; // move to next character
    }

    printf("\n");

    /*
    -----------------------------------------------
    PART 3: POINTER ARITHMETIC
    -----------------------------------------------
    */

    printf("\nPointer arithmetic examples:\n");
    printf("name[0] = %c\n", *(name + 0));
    printf("name[1] = %c\n", *(name + 1));
    printf("name[2] = %c\n", *(name + 2));

    /*
    -----------------------------------------------
    PART 4: char[] vs char*
    -----------------------------------------------
    */

    char arr[] = "Hello";
    char *p = "Hello";

    /*
        arr: array in stack, modifiable
        p  : pointer to string literal (read-only)
    */

    arr[0] = 'h'; // ✅ OK
    printf("\nModified array string: %s\n", arr);

    /*
        p[0] = 'h'; ❌ DANGEROUS
        Undefined behavior (often crash)
    */

    printf("Pointer string (read-only): %s\n", p);

    /*
    -----------------------------------------------
    PART 5: WHY STRING FUNCTIONS USE POINTERS
    -----------------------------------------------
    */

    /*
        printf("%s", name);
        printf expects char* -> address of first char
    */

    return 0;
}
