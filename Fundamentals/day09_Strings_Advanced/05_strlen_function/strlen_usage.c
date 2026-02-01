#include <stdio.h>
#include <string.h>

/*
========================================================
strlen_usage.c
========================================================

THEORY:
--------------------------------------------------------
1. strlen() is a function from <string.h>
2. It counts the number of characters in a string
3. IMPORTANT:
   - strlen() DOES NOT count the null character '\0'
4. Prototype:
       size_t strlen(const char *str);

5. Why parameter is char* ?
   → Because string in C is managed by POINTER

6. strlen() works with:
   - char array
   - char pointer
   - substring (pointer points inside a string)

COMMON MISTAKES:
- Expecting strlen() to count '\0' ❌
- Using strlen() on non-null-terminated array ❌
========================================================
*/

int main() {

    // Normal string (char array)
    char str1[] = "28tech.com.vn";

    // Print string
    printf("String str1: %s\n", str1);

    // strlen counts characters BEFORE '\0'
    printf("Length of str1: %lu\n", strlen(str1));

    /*
    MEMORY VIEW:
    ----------------------------------------------------
    | 2 | 8 | t | e | c | h | . | c | o | m | . | v | n | \0 |
    ----------------------------------------------------
      0   1   2   3   4   5   6   7   8   9   10  11  12
    strlen = 13
    */

    // Pointer points to middle of string
    char *ptr = &str1[6];   // points to '.'

    // ptr manages substring starting from index 6
    printf("\nSubstring via pointer: %s\n", ptr);

    // strlen now counts from '.' to '\0'
    printf("Length from ptr: %lu\n", strlen(ptr));

    /*
    ptr -> ".com.vn"
    strlen(ptr) = 7
    */

    // Another example: pointer to first character
    char *ptr2 = str1;

    printf("\nPointer ptr2 points to: %s\n", ptr2);
    printf("Length using ptr2: %lu\n", strlen(ptr2));

    return 0;
}
