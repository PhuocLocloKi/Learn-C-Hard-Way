#include <stdio.h>

/*
==================================================
STRING INPUT USING FGETS AND OUTPUT USING PUTS
==================================================
This file explains:
- Safe string input using fgets()
- Why fgets() is recommended
==================================================
*/

int main() {

    /*
    -----------------------------------------------
    DECLARE STRING BUFFER
    -----------------------------------------------
    */

    char fullName[50];

    /*
    -----------------------------------------------
    SAFE STRING INPUT
    -----------------------------------------------
    */

    printf("Enter your full name: ");
    fgets(fullName, sizeof(fullName), stdin);

    /*
        fgets behavior:
        - Reads until newline OR size - 1
        - Stores '\n' if there's space
        - Automatically adds '\0'
    */

    /*
    -----------------------------------------------
    OUTPUT STRING
    -----------------------------------------------
    */

    puts("Your full name is:");
    puts(fullName);

    /*
    -----------------------------------------------
    IMPORTANT NOTE ABOUT '\n'
    -----------------------------------------------
    */

    /*
        If input is:
        "Kungfutech Academy"

        fullName will be:
        "Kungfutech Academy\n\0"
    */

    return 0;
}
