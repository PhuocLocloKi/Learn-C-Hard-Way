#include <stdio.h>
#include <string.h>

/*
==================================================
COUNT CHARACTER FREQUENCY IN STRING
==================================================
*/

int main() {

    char str[100];
    char ch;
    int count = 0;

    /*
    -----------------------------------------------
    INPUT STRING
    -----------------------------------------------
    */

    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);

    /*
        Remove trailing newline added by fgets
    */
    str[strcspn(str, "\n")] = '\0';

    /*
    -----------------------------------------------
    INPUT CHARACTER
    -----------------------------------------------
    */

    printf("Enter character: ");
    scanf("%c", &ch);

    /*
    -----------------------------------------------
    COUNT FREQUENCY
    -----------------------------------------------
    */

    char *ptr = str;

    while (*ptr != '\0') {

        if (*ptr == ch) {
            count++;
        }

        ptr++; // move to next character
    }

    /*
    -----------------------------------------------
    OUTPUT
    -----------------------------------------------
    */

    printf("\nOUTPUT:\n");
    printf("Frequency of %c is %d\n", ch, count);

    return 0;
}
