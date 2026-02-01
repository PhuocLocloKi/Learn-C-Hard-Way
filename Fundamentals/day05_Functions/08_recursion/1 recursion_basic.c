#include <stdio.h>

/*
==================================================
RECURSION – BASIC CONCEPT
==================================================

WHAT IS RECURSION?

- Recursion is a technique where a function
  calls itself.
- Each call creates a new function call
  on the call stack.

TWO IMPORTANT PARTS OF RECURSION:
1. Base case       → stops recursion
2. Recursive case → function calls itself

WITHOUT BASE CASE → INFINITE LOOP ❌
==================================================
*/

void countdown(int n);

int main() {

    /*
        Start countdown from 5
    */
    countdown(5);

    return 0;
}


/*
--------------------------------------------------
FUNCTION DEFINITION
--------------------------------------------------
*/
void countdown(int n) {

    /*
        BASE CASE:
        Stop recursion when n == 0
    */
    if (n == 0) {
        return;
    }

    /*
        Print current value
    */
    printf("%d\n", n);

    /*
        RECURSIVE CALL:
        Function calls itself with smaller value
    */
    countdown(n - 1);
}
