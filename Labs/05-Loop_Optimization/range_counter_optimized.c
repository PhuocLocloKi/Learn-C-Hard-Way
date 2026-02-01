//✅ Version 3: Count Even Numbers in a Given Range (Advanced)
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

    // Ensure start <= end
    if (start > end) {
        int temp = start;
        start = end;
        end = temp;
    }

    // Loop through the range
    for (int i = start; i <= end; i++) {

        // Check even number
        if (i % 2 == 0) {
            count++;
        }
    }

    // Output result
    printf("Number of even numbers from %d to %d is: %d\n", start, end, count);

    return 0;
}
