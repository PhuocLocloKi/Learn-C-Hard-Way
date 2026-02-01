#include <stdio.h>
#include <string.h>

/*
=========================================================
PALINDROME CHECK - INDEX METHOD
=========================================================

THEORY:
- Let n = length of string
- Character at index i must equal character at index (n - i - 1)

Example:
String: "radar"
Indexes:
r a d a r
0 1 2 3 4

Check:
str[0] == str[4]
str[1] == str[3]

We only need to loop until i < n/2
=========================================================
*/

int isPalindrome(char str[]) {

    int n = strlen(str);               // Length of string

    // Loop through first half of the string
    for (int i = 0; i < n / 2; i++) {

        // Compare symmetric characters
        if (str[i] != str[n - i - 1]) {
            return 0;                  // Not palindrome
        }
    }

    return 1;                          // Palindrome
}

int main() {

    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character added by fgets
    str[strcspn(str, "\n")] = '\0';

    if (isPalindrome(str)) {
        printf("The string is a palindrome\n");
    } else {
        printf("The string is NOT a palindrome\n");
    }

    return 0;
}
