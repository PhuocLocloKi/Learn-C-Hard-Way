#include <stdio.h>
#include <string.h>
#include <ctype.h>

/*
=========================================================
PALINDROME CHECK - TWO POINTER METHOD
=========================================================

THEORY:
- A palindrome string reads the SAME from left to right
  and from right to left.

Examples:
- "level"        -> palindrome
- "madam"        -> palindrome
- "hello"        -> NOT palindrome

TWO POINTER IDEA:
- Use two indices:
    left  -> start of string
    right -> end of string
- Compare characters at left and right
- Move left++, right-- each step
- If ANY mismatch -> NOT palindrome

TIME COMPLEXITY:
- O(n)
=========================================================
*/

// Function to check palindrome using two pointers
int isPalindrome(char str[]) {

    int left = 0;                      // Left pointer starts at index 0
    int right = strlen(str) - 1;       // Right pointer starts at last character

    // Loop until the two pointers meet or cross
    while (left < right) {

        // Compare characters at left and right
        if (str[left] != str[right]) {
            return 0;                  // Not palindrome
        }

        left++;                        // Move left pointer to the right
        right--;                       // Move right pointer to the left
    }

    return 1;                          // Palindrome
}

int main() {

    char str1[] = "level";
    char str2[] = "programming";
    char str3[] = "abba";

    // Test case 1
    if (isPalindrome(str1)) {
        printf("%s is a palindrome\n", str1);
    } else {
        printf("%s is NOT a palindrome\n", str1);
    }

    // Test case 2
    if (isPalindrome(str2)) {
        printf("%s is a palindrome\n", str2);
    } else {
        printf("%s is NOT a palindrome\n", str2);
    }

    // Test case 3
    if (isPalindrome(str3)) {
        printf("%s is a palindrome\n", str3);
    } else {
        printf("%s is NOT a palindrome\n", str3);
    }

    return 0;
}
