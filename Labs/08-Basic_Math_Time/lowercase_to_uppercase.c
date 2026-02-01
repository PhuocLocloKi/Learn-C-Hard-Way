//5/ Input a character, then print it to the screen

//upperCase
//If it's a lowercase character, capitalize it

//Example: a -> A


#include <stdio.h>

int main() {

    char character;

    // Input a single character from keyboard
    printf("Enter a character: ");
    scanf("%c", &character);

    // Check if the character is a lowercase letter (a–z)
    if (character >= 'a' && character <= 'z') {
        // Convert lowercase to uppercase using ASCII difference
        character = character - 32;
    }

    // Print the result character
    printf("Result: %c\n", character);

    return 0;
}
