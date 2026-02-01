#include <stdio.h>
#include <string.h>

/*
====================================================
STRING INPUT USING fgets()
====================================================

THEORY:
- fgets() reads an entire line including spaces
- Stops when:
  + newline is read
  + buffer is full
- Keeps the '\n' character if space allows

SYNTAX:
fgets(buffer, buffer_size, stdin);

WHY fgets IS BEST:
✔ Prevents buffer overflow
✔ Can read spaces
✔ Standard & safe
====================================================
*/

int main() {

    // Declare string buffer
    char str[100];

    // Ask user for input
    printf("Enter a sentence: ");

    // Read string from keyboard (stdin)
    fgets(str, 100, stdin);

    /*
    Example input:
    Hello C Programming

    Stored in memory as:
    H e l l o   C   P r o g r a m m i n g \n \0
    */

    // Print string exactly as stored
    printf("\nRaw string output:");
    printf("\n%s", str);

    // Print length (includes '\n')
    printf("Length (with newline): %d\n", strlen(str));

    return 0; // End program
}
