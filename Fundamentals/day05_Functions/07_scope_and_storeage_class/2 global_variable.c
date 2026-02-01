#include <stdio.h>

/*
==================================================
GLOBAL VARIABLES IN C
==================================================

WHAT IS A GLOBAL VARIABLE?

- Declared OUTSIDE all functions
- Accessible from ANY function
- Exists during the entire program execution

WARNING:
- Global variables can be modified anywhere
- Can cause bugs if not used carefully
==================================================
*/

/*
    Global variable
*/
int globalCounter = 0;

void incrementCounter();

int main() {

    printf("Initial globalCounter = %d\n", globalCounter);

    incrementCounter();
    incrementCounter();

    printf("Final globalCounter = %d\n", globalCounter);

    return 0;
}

void incrementCounter() {

    /*
        Access and modify global variable
    */
    globalCounter++;
}
