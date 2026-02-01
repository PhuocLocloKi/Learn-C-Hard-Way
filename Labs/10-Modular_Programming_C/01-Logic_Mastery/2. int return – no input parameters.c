#include <stdio.h>

// Function: check even/odd from 1 to 100
// Return 1 after finishing
int checkEvenOdd(void);

int main() {

    printf("Checking numbers from 1 to 100...\n");
    checkEvenOdd();

    return 0;
}

int checkEvenOdd(void) {

    int start = 1;
    int end = 100;

    for (int i = start; i <= end; i++) {
        if (i % 2 == 0) {
            printf("%d is even\n", i);
        } else {
            printf("%d is odd\n", i);
        }
    }

    return 1;
}
