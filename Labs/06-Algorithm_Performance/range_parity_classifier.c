#include <stdio.h>

int main() {

    int start, end;
    int oddCount = 0;
    int evenCount = 0;

    // Input start value
    printf("Enter start: ");
    scanf("%d", &start);

    // Input end value
    printf("Enter end: ");
    scanf("%d", &end);

    // Ensure start <= end
    if (start > end) {
        int temp = start;   // Temporary variable for swapping
        start = end;
        end = temp;
    }

    // Traverse through the range
    for (int i = start; i <= end; i++) {

        // Check even number
        if (i % 2 == 0) {
            evenCount++;    // Increase even counter
        }
        // Otherwise, it is an odd number
        else {
            oddCount++;     // Increase odd counter
        }
    }

    // Output results
    printf("Range: [%d, %d]\n", start, end);
    printf("Total even numbers: %d\n", evenCount);
    printf("Total odd numbers : %d\n", oddCount);

    return 0;
}
