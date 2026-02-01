#include <stdio.h>

// Function: check even/odd from start to end
// No return value
void checkEvenOdd(int start, int end);

int main() {

    int start, end;

    printf("Enter start: ");
    scanf("%d", &start);

    printf("Enter end: ");
    scanf("%d", &end);

    checkEvenOdd(start, end);

    return 0;
}

void checkEvenOdd(int start, int end) {

    for (int i = start; i <= end; i++) {
        if (i % 2 == 0) {
            printf("%d is even\n", i);
        } else {
            printf("%d is odd\n", i);
        }
    }
}
