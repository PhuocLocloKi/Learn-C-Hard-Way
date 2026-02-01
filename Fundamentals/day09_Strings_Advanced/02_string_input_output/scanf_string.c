#include <stdio.h>

/*
====================================================
STRING INPUT USING scanf("%s")
====================================================

THEORY:
- scanf("%s") reads characters until it meets:
  + space
  + tab
  + newline ('\n')

- Because of that:
  ✔ Good for single words
  ✘ Cannot read full sentences

IMPORTANT:
- scanf automatically appends '\0' at the end
====================================================
*/

int main() {

    // Declare a character array (string buffer)
    char str[100];

    // Ask user for input
    printf("Enter a word (no spaces allowed): ");

    // Read string using scanf
    // "%s" reads until it encounters whitespace
    scanf("%s", str);

    // Print the stored string
    printf("You entered: %s\n", str);

    /*
    Example:
    Input:  Hello World
    Stored: "Hello\0"
    Output: Hello
    */

    return 0; // End of program
}
