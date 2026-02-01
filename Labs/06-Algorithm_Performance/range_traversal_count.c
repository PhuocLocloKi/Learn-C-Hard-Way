//1. Count the numbers in the range from start to end
//Example: start = 2, end = 6
//The number of numbers in the range is 5


#include <stdio.h>

int main() {

    int start, end;
    int count = 0;

    // Input start value
    printf("Enter start: ");
    scanf("%d", &start);

    // Input end value
    printf("Enter end: ");
    scanf("%d", &end);

    // Ensure start is always less than or equal to end
    if (start > end) {
        int temp = start;   // Store start temporarily
        start = end;        // Assign end to start
        end = temp;         // Assign temp to end
    }

    // Count numbers from start to end (inclusive)
    for (int i = start; i <= end; i++) {
        count++;            // Increase counter by 1
    }

    // Print the result
    printf("Total numbers in range [%d, %d]: %d\n", start, end, count);

    return 0;
}

