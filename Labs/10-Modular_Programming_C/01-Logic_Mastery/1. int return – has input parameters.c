// Write a function to check if the number is even or odd from start to end

// int ( output - input)

// Write a function to check if the number is even or odd from start to end

// int ( output - input)

//🔹 1. int return – has input parameters
#include <stdio.h>

// Function: check even/odd from start to end
// Return 1 after finishing
int checkEvenOdd(int start, int end);

int main() {
    int start, end;

    printf("Enter start: ");
    scanf("%d", &start);

    printf("Enter end: ");
    scanf("%d", &end);

    int result = checkEvenOdd(start, end);

    return 0;
}

int checkEvenOdd(int start, int end) {

    for (int i = start; i <= end; i++) {
        if (i % 2 == 0) {
            printf("%d is even\n", i);
        } else {
            printf("%d is odd\n", i);
        }
    }

    return 1;
}

