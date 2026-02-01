#include <stdio.h>

/*
=====================================================
STRICT INTEGER INPUT (inputRightFrom)
=====================================================

Goal:
- Accept ONLY a valid integer
- Reject mixed input like:
    12a
    17.8
    12oki

Idea:
- Read integer
- Read next character
- If next character is NOT newline → invalid input
*/

int main() {

    int n;             // Store integer value
    char bufferAo;     // Temporary buffer character

    do {

        printf("\nEnter an integer: ");

        /*
        ---------------------------------------------
        Read integer part
        ---------------------------------------------
        */
        scanf("%d", &n);

        /*
        ---------------------------------------------
        Read the next character
        ---------------------------------------------
        If user entered extra characters,
        this will NOT be '\n'
        */
        scanf("%c", &bufferAo);

        /*
        ---------------------------------------------
        Clear remaining input buffer
        ---------------------------------------------
        */
        fflush(stdin);

        /*
        ---------------------------------------------
        Check input validity
        ---------------------------------------------
        ASCII 10 = newline ('\n')
        */
        if (bufferAo != 10) {
            printf("Invalid input! Please enter a pure integer.\n");
        }

    } while (bufferAo != 10);

    printf("\nValid integer entered: %d\n", n);

    return 0;
}
