#include <stdio.h>
#include <string.h>

/*
====================================================
FIX INPUT BUFFER USING scanf("\\n")
====================================================

THEORY:
- scanf("\n") ignores:
  + spaces
  + tabs
  + newline characters

It waits until a NON-WHITESPACE character appears

ADVANTAGE:
- Removes MULTIPLE whitespace characters
- Cleaner than getchar()

DISADVANTAGE:
- Can block if user enters only spaces
====================================================
*/

int main() {

    int id;
    char fullname[100];
    char address[200];

    // Input integer ID
    printf("Enter ID: ");
    scanf("%d", &id);

    // Flush whitespace from buffer
    scanf("\n");  // <-- KEY LINE

    // Input full name
    printf("Enter full name: ");
    fgets(fullname, 100, stdin);

    // Remove newline
    if (fullname[strlen(fullname) - 1] == '\n') {
        fullname[strlen(fullname) - 1] = '\0';
    }

    // Input address
    printf("Enter address: ");
    fgets(address, 200, stdin);

    // Remove newline
    if (address[strlen(address) - 1] == '\n') {
        address[strlen(address) - 1] = '\0';
    }

    // Output
    printf("\nSTUDENT INFORMATION\n");
    printf("ID      : %d\n", id);
    printf("Name    : %s\n", fullname);
    printf("Address : %s\n", address);

    /*
    IMPORTANT NOTE:
    - Do NOT use fflush(stdin)
    - Undefined behavior in C standard
    */

    return 0;
}
