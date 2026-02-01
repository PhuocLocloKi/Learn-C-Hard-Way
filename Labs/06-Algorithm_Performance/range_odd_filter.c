//Count the odd numbers in the range from start to end
//Example: start = 2, end = 6
//The number of numbers in the range is 2


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

    // Ensure start is less than or equal to end
    if (start > end) {
        int temp = start;   // Store start temporarily
        start = end;        // Assign end to start
        end = temp;         // Assign temp to end
    }

    // Traverse from start to end
    for (int i = start; i <= end; i++) {

        // Check if the current number is odd
        if (i % 2 != 0) {
            count++;        // Increase odd counter
        }
    }

    // Print the result
    printf("Total odd numbers in range [%d, %d]: %d\n", start, end, count);

    return 0;
}
