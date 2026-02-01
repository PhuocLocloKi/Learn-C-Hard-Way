#include <stdio.h>

/*
=====================================================
CLEAR INPUT BUFFER (delBuffer)
=====================================================

Problem:
- After using scanf("%d"), the ENTER key ('\n')
  remains in the input buffer
- Next scanf("%c") reads that '\n' instead of real input

Solution:
- Clear input buffer before reading character
*/

int main() {

    int age;    // Store integer input
    char ch;    // Store character input

    // Input integer
    printf("Enter age: ");
    scanf("%d", &age);

    /*
    ---------------------------------------------
    Clear input buffer
    ---------------------------------------------
    Removes leftover '\n' from previous scanf
    */
    fflush(stdin);   // Non-standard but works in many compilers (Windows)

    // Input character
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Output values
    printf("\nAge = %d", age);
    printf("\nCharacter = %c", ch);

    return 0;
}
