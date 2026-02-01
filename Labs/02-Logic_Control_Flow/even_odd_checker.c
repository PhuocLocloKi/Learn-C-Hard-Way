//Enter a positive integer, check if that number is even or odd.
//✅ Version 1 – Using % operator (basic way)
#include <stdio.h>

int main() {

    // Prompt user to enter an integer
    printf("Enter an integer to check even or odd: ");

    int number;
    scanf("%d", &number);

    // Check if the number is even
    if (number % 2 == 0) {
        printf("Even number");
    }
    // Otherwise, the number is odd
    else {
        printf("Odd number");
    }

    return 0;
}


//✅ Version 2 – Using ternary operator (advanced & cleaner)

#include <stdio.h>

int main() {

    // Prompt user to enter an integer
    printf("Enter an integer to check even or odd: ");

    int number;
    scanf("%d", &number);

    // Determine even or odd using ternary operator
    // If number % 2 == 0 → isEven = 1
    // Otherwise → isEven = 0
    int isEven = (number % 2 == 0) ? 1 : 0;

    // Check result and print output
    if (isEven == 1) {
        printf("Even number");
    } else {
        printf("Odd number");
    }

    return 0;
}





