#include <stdio.h>

/*
==================================================
FUNCTION POINTER AS PARAMETER (CALLBACK)
==================================================

WHAT IS A CALLBACK?

- A function passed as an argument
- Called inside another function

USE CASE:
- Event handling
- Flexible program behavior
==================================================
*/

/*
    Some simple functions
*/
void greetMorning() {
    printf("Good Morning ☀️\n");
}

void greetEvening() {
    printf("Good Evening 🌙\n");
}

/*
    Function that receives another function
*/
void greet(void (*func)()) {

    /*
        Call the function passed as argument
    */
    func();
}

int main() {

    /*
        Pass different functions dynamically
    */
    greet(greetMorning);
    greet(greetEvening);

    return 0;
}
