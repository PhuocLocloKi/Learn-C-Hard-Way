//4. Input the height and width of the rectangle and print an empty rectangle.

//Example: height = 4, width = 5

#include <stdio.h>

int main() {

    int height, width;

    // Input height of the rectangle
    printf("Enter height: ");
    scanf("%d", &height);

    // Input width of the rectangle
    printf("Enter width: ");
    scanf("%d", &width);

    // Loop through each row
    for (int i = 1; i <= height; i++) {

        // Loop through each column
        for (int j = 1; j <= width; j++) {

            // Print '*' on the border of the rectangle
            if (i == 1 || i == height || j == 1 || j == width) {
                printf("* ");
            }
            // Print spaces inside the rectangle
            else {
                printf("  ");
            }
        }

        // Move to next line after each row
        printf("\n");
    }

    return 0;
}

