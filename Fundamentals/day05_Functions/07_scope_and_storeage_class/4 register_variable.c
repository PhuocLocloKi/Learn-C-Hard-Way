#include <stdio.h>

/*
==================================================
REGISTER VARIABLES IN C
==================================================

WHAT IS A REGISTER VARIABLE?

- Declared using keyword "register"
- Suggests storing variable in CPU register
- Faster access (theoretically)

IMPORTANT NOTES:
- Compiler may ignore register keyword
- You CANNOT get the address of a register variable
==================================================
*/

int main() {

    /*
        Register variable
    */
    register int i;

    for (i = 0; i < 5; i++) {
        printf("i = %d\n", i);
    }

    /*
        ERROR if uncommented:
        Cannot take address of register variable
    */
    // printf("%p", &i);

    return 0;
}
