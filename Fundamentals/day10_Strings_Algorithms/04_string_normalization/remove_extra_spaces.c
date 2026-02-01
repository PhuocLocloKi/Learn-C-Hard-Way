#include <stdio.h>
#include <string.h>

/*
========================================================
REMOVE EXTRA SPACES INSIDE STRING
========================================================

THEORY:
- Normalization = cleaning string data
- Common problems:
  + Leading spaces
  + Trailing spaces
  + Multiple spaces between words

GOAL:
"   C    programming   language   "
→ "C programming language"

TECHNIQUE:
- Use two indexes:
  i → read index
  j → write index
========================================================
*/

int main() {

    char str[300] = "   C    programming   language   ";
    char result[300];

    int i = 0;  // index to read from original string
    int j = 0;  // index to write into result string

    // 1. Skip leading spaces
    while (str[i] == ' ') {
        i++;
    }

    // 2. Traverse entire string
    while (str[i] != '\0') {

        // If current character is NOT a space
        if (str[i] != ' ') {

            // Copy character to result
            result[j] = str[i];
            j++;
        }
        else {
            // If current char is space,
            // write ONLY ONE space
            result[j] = ' ';
            j++;

            // Skip all consecutive spaces
            while (str[i] == ' ') {
                i++;
            }
            continue;
        }

        i++;
    }

    // 3. Remove trailing space if exists
    if (result[j - 1] == ' ') {
        j--;
    }

    // 4. Add null terminator
    result[j] = '\0';

    printf("Normalized string: '%s'\n", result);

    return 0;
}
