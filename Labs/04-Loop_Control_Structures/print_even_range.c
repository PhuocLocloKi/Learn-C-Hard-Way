// Print the number of even digits from star - end, star and end entered from the keyboard.

#include <stdio.h>

int main() {

    int start, end;

    // Input start value
    printf("Enter start: ");
    scanf("%d", &start);

    // Input end value
    printf("Enter end: ");
    scanf("%d", &end);

    // If start is greater than end, swap them
    if (start > end) {
        int tmp = start;   // Store start value temporarily
        start = end;       // Assign end to start
        end = tmp;         // Assign old start to end
    }

    // Print even numbers from start to end
    for (int i = start; i <= end; i++) {

        // Check if the number is even
        if (i % 2 == 0) {
            printf("Even number: %d\n", i);
        }
    }

    return 0;
}
