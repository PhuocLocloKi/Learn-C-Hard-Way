#include <stdio.h>

/*
==================================================
STRING INPUT USING SCANF
==================================================
This file explains:
- How scanf reads strings
- Why scanf("%s") is dangerous
==================================================
*/

int main() {

    /*
    -----------------------------------------------
    BASIC STRING INPUT WITH SCANF
    -----------------------------------------------
    */

    char name[20];

    printf("Enter your name: ");
    scanf("%s", name);

    /*
        scanf("%s") behavior:
        - Reads input until it meets whitespace
        - Whitespace = space, tab, newline
    */

    printf("Your name is: %s\n", name);

    /*
    -----------------------------------------------
    PROBLEM DEMONSTRATION
    -----------------------------------------------
    */

    /*
        If user enters:
        "Kungfutech Academy"

        Result:
        name = "Kungfutech"

        "Academy" is ignored
    */

    return 0;
}
