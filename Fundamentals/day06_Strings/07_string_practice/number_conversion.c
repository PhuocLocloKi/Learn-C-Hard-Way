#include <stdio.h>
#include <string.h>

/*
==================================================
NUMBER SYSTEM CONVERSION
==================================================
Convert a decimal number to:
- Binary (base 2)
- Octal  (base 8)
- Hexa   (base 16)

IMPORTANT:
- Result is stored as STRING (char array)
- We do NOT use int/long long for binary or hexa
==================================================
*/

/*
--------------------------------------------------
FUNCTION: reverseString
PURPOSE : Reverse a string in-place
PARAM   : char *str  -> pointer to the string
WHY     : When converting number, digits are
          generated in reverse order
--------------------------------------------------
*/
void reverseString(char *str) {

    // Left index starts from beginning of string
    int left = 0;

    // Right index starts from last character (before '\0')
    int right = strlen(str) - 1;

    // Swap characters until left meets right
    while (left < right) {

        // Temporary variable to swap characters
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;

        // Move indices toward center
        left++;
        right--;
    }
}

/*
--------------------------------------------------
FUNCTION: convertNumber
PURPOSE : Convert decimal number to another base
PARAMS  :
    number -> decimal number to convert
    base   -> target base (2, 8, 16)
    result -> char array to store converted value
--------------------------------------------------
*/
void convertNumber(int number, int base, char *result) {

    // Index to store characters in result string
    int index = 0;

    // Repeat until number becomes 0
    while (number > 0) {

        // Get remainder (this is the next digit)
        int remainder = number % base;

        /*
            If remainder is 0 - 9:
            convert it to character '0' - '9'
        */
        if (remainder < 10) {
            result[index++] = remainder + '0';
        }
        /*
            If remainder is 10 - 15 (Hexadecimal):
            convert it to 'A' - 'F'
        */
        else {
            result[index++] = remainder - 10 + 'A';
        }

        // Reduce number for next iteration
        number /= base;
    }

    // Add null terminator to end string
    result[index] = '\0';

    // Reverse the string to get correct order
    reverseString(result);
}

int main() {

    // Variable to store input number
    int number;

    // User choice: 1 (binary), 2 (octal), 3 (hexa)
    int choice;

    // String to store result
    char result[100];

    /*
    -----------------------------------------------
    INPUT SECTION
    -----------------------------------------------
    */

    printf("Convert to binary 2. Convert to octal 3. Convert to hexa\n");

    printf("Enter your number: ");
    scanf("%d", &number);

    printf("Enter your choice: ");
    scanf("%d", &choice);

    /*
    -----------------------------------------------
    PROCESS & OUTPUT SECTION
    -----------------------------------------------
    */

    printf("\nOUTPUT:\n");

    // Convert to Binary
    if (choice == 1) {
        convertNumber(number, 2, result);
        printf("Binary is %s\n", result);
    }
    // Convert to Octal
    else if (choice == 2) {
        convertNumber(number, 8, result);
        printf("Octal is %s\n", result);
    }
    // Convert to Hexadecimal
    else if (choice == 3) {
        convertNumber(number, 16, result);
        printf("Hexa is %s\n", result);
    }
    // Invalid choice
    else {
        printf("Invalid choice!\n");
    }

    return 0;
}
