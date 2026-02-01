// Calculate the sum of even numbers, input from start - end


#include <stdio.h>

int main() {

    int start, end;

    // Input start value
    printf("Enter start: ");
    scanf("%d", &start);

    // Input end value
    printf("Enter end: ");
    scanf("%d", &end);

    int sum = 0;

    // Swap start and end if start is greater than end
    if (start > end) {
        int tmp = start;   // Store start temporarily
        start = end;       // Assign end to start
        end = tmp;         // Assign old start to end
    }

    // Loop through the range from start to end
    for (int i = start; i <= end; i++) {

        // Check if the number is even
        if (i % 2 == 0) {
            sum += i;      // Add even number to sum
        }
    }

    // Output the final sum
    printf("Sum of even numbers = %d\n", sum);

    return 0;
}

