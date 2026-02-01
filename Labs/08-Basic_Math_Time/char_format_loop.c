//3.printFormat
//Enter an alphabet character: a, b, c
//Print that character to the screen as:
//Number, character, octal
//Examples:
// a -> 97 a 141
// A -> Get beaten


//✅ Version 1 – Single input (simple & clean)
#include <stdio.h>

int main() {

    char ch;

    // Input one alphabet character
    printf("Enter an alphabet character: ");
    scanf(" %c", &ch);   // space before %c ignores leftover newline

    // Print decimal value, character, and octal value
    printf("%d %c %o\n", ch, ch, ch);

    // Check if character is uppercase (A - Z)
    if (ch >= 'A' && ch <= 'Z') {
        printf("An Don\n");
    }

    return 0;
}

//✅ Version 2 – Using do-while (repeat until NOT uppercase)
#include <stdio.h>

int main() {

    char ch;

    do {
        // Input character
        printf("\nEnter a character: ");
        scanf(" %c", &ch);   // ignore newline character

        // Print decimal, character, and octal formats
        printf("%d %c %o\n", ch, ch, ch);

        // If uppercase letter, print warning message
        if (ch >= 'A' && ch <= 'Z') {
            printf("An Don\n");
        }

    } while (ch >= 'A' && ch <= 'Z');  // Continue while uppercase

    return 0;
}

