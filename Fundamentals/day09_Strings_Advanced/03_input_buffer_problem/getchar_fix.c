#include <stdio.h>
#include <string.h>

/*
====================================================
FIX INPUT BUFFER USING getchar()
====================================================

THEORY:
- getchar() reads ONE character from input buffer
- Used to consume leftover '\n' from scanf()

WHEN TO USE:
- scanf() before fgets()
- scanf() before gets()

LIMITATION:
- Only removes ONE character
====================================================
*/

int main() {

    int age;
    char name[100];
    char email[100];

    // Input integer
    printf("Enter your age: ");
    scanf("%d", &age);

    // Remove leftover '\n'
    getchar();   // <-- VERY IMPORTANT LINE

    // Input full name (with spaces)
    printf("Enter your full name: ");
    fgets(name, 100, stdin);

    // Remove newline from name
    if (name[strlen(name) - 1] == '\n') {
        name[strlen(name) - 1] = '\0';
    }

    // Input email
    printf("Enter your email: ");
    fgets(email, 100, stdin);

    // Remove newline from email
    if (email[strlen(email) - 1] == '\n') {
        email[strlen(email) - 1] = '\0';
    }

    // Output
    printf("\nUSER INFO:\n");
    printf("Age   : %d\n", age);
    printf("Name  : %s\n", name);
    printf("Email : %s\n", email);

    /*
    FLOW SUMMARY:
    scanf() → leaves '\n'
    getchar() → consumes '\n'
    fgets() → works correctly
    */

    return 0;
}
