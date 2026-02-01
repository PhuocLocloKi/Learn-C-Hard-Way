#include <stdio.h>

/*
==================================================
STATIC VARIABLES IN C
==================================================

WHAT IS A STATIC VARIABLE?

- Declared using keyword "static"
- Keeps its value between function calls
- Initialized ONLY ONCE

KEY DIFFERENCE:
- Local variable → destroyed after function ends
- Static variable → remembers its value
==================================================
*/

void demoStaticVariable();

int main() {

    demoStaticVariable();
    demoStaticVariable();
    demoStaticVariable();

    return 0;
}

void demoStaticVariable() {

    /*
        Static local variable
        Initialized only once
    */
    static int count = 1;

    printf("count = %d\n", count);

    /*
        Value is preserved for next call
    */
    count++;
}
