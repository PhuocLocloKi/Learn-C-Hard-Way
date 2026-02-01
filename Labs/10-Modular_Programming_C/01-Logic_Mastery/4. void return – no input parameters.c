#include <stdio.h>

// Function: check even/odd from 20 to 50
// No input, no return
void checkEvenOdd(void);

int main() {

    printf("Checking numbers from 20 to 50...\n");
    checkEvenOdd();

    return 0;
}

void checkEvenOdd(void) {

    int start = 20;
    int end = 50;

    for (int i = start; i <= end; i++) {
        if (i % 2 == 0) {
            printf("%d is even\n", i);
        } else {
            printf("%d is odd\n", i);
        }
    }
}
