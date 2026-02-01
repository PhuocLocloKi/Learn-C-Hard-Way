#include <stdio.h>

/*
========================================================
 my_strlen.c
========================================================

THEORY:
--------------------------------------------------------
1. String in C ends with NULL CHARACTER '\0'
2. strlen() works by:
   - Starting from first character
   - Counting characters
   - STOPPING when '\0' is found

3. We will IMPLEMENT strlen() ourselves
   → This helps understand:
     - Pointer
     - Memory traversal
     - Why string MUST end with '\0'

4. This function works for:
   - char array
   - char pointer
   - substring (pointer inside string)
========================================================
*/

// Custom strlen implementation
int my_strlen(char *str) {

    int count = 0;   // Counter for characters

    // Loop until null character is found
    while (str[count] != '\0') {

        count++;     // Increase count
    }

    return count;    // Return number of characters
}

int main() {

    // Example 1: normal string
    char str1[] = "C Programming";

    printf("String: %s\n", str1);
    printf("Length (my_strlen): %d\n", my_strlen(str1));

    /*
    MEMORY:
    ------------------------------------------------
    | C |   | P | r | o | g | r | a | m | m | i | n | g | \0 |
    ------------------------------------------------
    */

    // Example 2: another string
    char str2[] = "Pointer & String";

    printf("\nString: %s\n", str2);
    printf("Length (my_strlen): %d\n", my_strlen(str2));

    // Example 3: substring using pointer
    char *ptr = &str1[2];   // points to 'P'

    printf("\nSubstring managed by ptr: %s\n", ptr);
    printf("Length from ptr: %d\n", my_strlen(ptr));

    /*
    ptr -> "Programming"
    Length = 11
    */

    // Example 4: pointer walking
    char *walk = str1;

    int step = 0;
    while (*walk != '\0') {
        printf("Step %d: %c\n", step, *walk);
        walk++;   // Move pointer to next character
        step++;
    }

    return 0;
}
