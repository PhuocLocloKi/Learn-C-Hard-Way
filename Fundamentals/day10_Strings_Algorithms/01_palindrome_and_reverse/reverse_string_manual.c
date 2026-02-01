#include <stdio.h>
#include <string.h>

/*
=========================================================
REVERSE STRING MANUALLY
=========================================================

THEORY:
- Reversing a string means swapping characters:
    first <-> last
    second <-> second last
- Same idea as palindrome, but ALWAYS swap

IMPORTANT:
- Do NOT use strrev() (not standard C)
- Write your own function

ALGORITHM:
1. left = 0
2. right = length - 1
3. Swap str[left] and str[right]
4. left++, right--
=========================================================
*/

// Function to reverse a string in-place
void reverseString(char str[]) {

    int left = 0;
    int right = strlen(str) - 1;

    while (left < right) {

        // Temporary variable to store character
        char temp = str[left];

        // Swap characters
        str[left] = str[right];
        str[right] = temp;

        // Move pointers
        left++;
        right--;
    }
}

int main() {

    char str1[] = "computer";
    char str2[] = "abcdef";
    char str3[100];

    // Reverse fixed strings
    reverseString(str1);
    reverseString(str2);

    printf("Reversed str1: %s\n", str1);
    printf("Reversed str2: %s\n", str2);

    // Reverse user input
    printf("Enter a string: ");
    fgets(str3, sizeof(str3), stdin);

    // Remove newline
    str3[strcspn(str3, "\n")] = '\0';

    reverseString(str3);

    printf("Reversed input: %s\n", str3);

    return 0;
}
