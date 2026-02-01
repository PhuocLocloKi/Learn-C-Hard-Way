#include <stdio.h>

int main() {

    int age;        // Variable to store integer input
    char ch;        // Variable to store character input

    // Ask user to input an integer
    printf("Enter age: ");
    scanf("%d", &age);      // Read integer, BUT '\n' is left in buffer

    // Clear input buffer to remove leftover '\n'
    while (getchar() != '\n');  

    // Ask user to input a character
    printf("Enter character: ");
    scanf("%c", &ch);       // Now this reads the correct character

    // Print stored values
    printf("\nAge = %d", age);
    printf("\nCharacter = %c", ch);

    return 0;   // End program successfully
}
