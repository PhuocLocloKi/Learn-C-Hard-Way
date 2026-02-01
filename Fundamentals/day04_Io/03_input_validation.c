#include <stdio.h>

int main() {

    /*
    =====================================================
    INPUT VALIDATION THEORY
    =====================================================
    Goal:
    - Accept ONLY pure integer input
    - Reject: 12a, 17.5, abc
    */

    int n;          // Store integer value
    char extra;     // Store extra character after integer

    do {
        printf("Enter an integer: ");

        /*
        scanf("%d%c"):
        - %d  reads integer part
        - %c  reads the next character
        */

        if (scanf("%d%c", &n, &extra) != 2 || extra != '\n') {

            // Input is invalid
            printf("Invalid input! Please enter an integer only.\n");

            // Clear remaining characters in buffer
            while (getchar() != '\n');

        } else {
            // Input is valid
            break;
        }

    } while (1);   // Infinite loop until valid input

    printf("Valid integer entered: %d\n", n);

    return 0;
}
