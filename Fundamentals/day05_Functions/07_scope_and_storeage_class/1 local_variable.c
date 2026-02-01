#include <stdio.h>

/*
==================================================
LOCAL VARIABLES IN C
==================================================

WHAT IS A LOCAL VARIABLE?

- A local variable is declared INSIDE a function or block
- It can be used ONLY inside that function or block
- It is destroyed when the function ends

KEY POINTS:
- Scope: inside the function/block
- Lifetime: while the function is running
==================================================
*/

void demoLocalVariable();

int main() {

    demoLocalVariable();

    /*
        ERROR if uncommented:
        x is NOT accessible here because
        it is a local variable inside demoLocalVariable()
    */
    // printf("%d\n", x);

    return 0;
}

void demoLocalVariable() {

    /*
        Local variable
        Exists ONLY inside this function
    */
    int x = 10;

    printf("Local variable x = %d\n", x);
}
