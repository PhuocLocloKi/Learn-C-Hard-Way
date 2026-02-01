#include <stdio.h>
#include <string.h>

/*
====================================================
INPUT BUFFER PROBLEM (COMMAND SKIPPING)
====================================================

THEORY:
- scanf() reads formatted input
- When reading numbers, scanf DOES NOT consume '\n'
- The leftover '\n' stays in the input buffer

PROBLEM:
- gets() / fgets() reads until '\n'
- If '\n' is already in buffer → string input is SKIPPED

THIS FILE:
- PURPOSELY shows the bug
====================================================
*/

int main() {

    int age;             // Integer variable
    char name[100];      // String variable

    // Ask user for an integer
    printf("Enter your age: ");
    scanf("%d", &age);
    // After this line, '\n' is STILL in the input buffer

    // Ask user for a string
    printf("Enter your name: ");
    fgets(name, 100, stdin);
    // fgets reads the leftover '\n' immediately → SKIPPED

    // Output results
    printf("\nRESULT:\n");
    printf("Age: %d\n", age);
    printf("Name: %s\n", name);

    /*
    EXPECTED:
    User enters name

    ACTUAL:
    Name is empty or just '\n'

    REASON:
    fgets() reads leftover newline
    */

    return 0;
}
