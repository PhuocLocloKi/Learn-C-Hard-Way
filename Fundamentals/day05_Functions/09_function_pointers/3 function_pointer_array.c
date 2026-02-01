#include <stdio.h>

/*
==================================================
ARRAY OF FUNCTION POINTERS
==================================================

WHY USE FUNCTION POINTER ARRAYS?

- Choose function at runtime
- Very useful for menus, calculators, commands
==================================================
*/

/*
    Math operation functions
*/
void add(int a, int b) {
    printf("Addition: %d\n", a + b);
}

void subtract(int a, int b) {
    printf("Subtraction: %d\n", a - b);
}

void multiply(int a, int b) {
    printf("Multiplication: %d\n", a * b);
}

int main() {

    int choice;
    int x = 10;
    int y = 5;

    /*
        Declare array of function pointers
    */
    void (*operations[3])(int, int) = {
        add,
        subtract,
        multiply
    };

    printf("x = %d, y = %d\n", x, y);
    printf("Choose operation:\n");
    printf("0 - Add\n");
    printf("1 - Subtract\n");
    printf("2 - Multiply\n");

    scanf("%d", &choice);

    /*
        Validate input
    */
    if (choice >= 0 && choice < 3) {

        /*
            Call selected function
        */
        operations[choice](x, y);

    } else {
        printf("Invalid choice!\n");
    }

    return 0;
}
