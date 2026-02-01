//triangle.c

//Input the three sides a, b, c

//Check what type of triangle it is

//Based on the conditions of the three sides

//Example:

// - General triangle: the sum of any two sides is always greater than the other two sides

// ...

#include <stdio.h>
#include <math.h>

int main() {

    // Input three sides of the triangle
    double a, b, c;

    printf("Enter side a: ");
    scanf("%lf", &a);

    printf("Enter side b: ");
    scanf("%lf", &b);

    printf("Enter side c: ");
    scanf("%lf", &c);

    // Check if all sides are positive
    if (a <= 0 || b <= 0 || c <= 0) {
        printf("Invalid input: sides must be positive numbers\n");
        return 0;
    }

    // Check triangle inequality condition
    if (a + b <= c || a + c <= b || b + c <= a) {
        printf("The given sides do NOT form a triangle\n");
        return 0;
    }

    // Check for equilateral triangle
    if (a == b && b == c) {
        printf("Equilateral triangle\n");
        return 0;
    }

    // Check for right triangle
    int isRightTriangle =
        (pow(a, 2) == pow(b, 2) + pow(c, 2)) ||
        (pow(b, 2) == pow(a, 2) + pow(c, 2)) ||
        (pow(c, 2) == pow(a, 2) + pow(b, 2));

    // Check for isosceles triangle
    int isIsosceles =
        (a == b) || (a == c) || (b == c);

    // Classify triangle
    if (isRightTriangle && isIsosceles) {
        printf("Right isosceles triangle\n");
    }
    else if (isRightTriangle) {
        printf("Right triangle\n");
    }
    else if (isIsosceles) {
        printf("Isosceles triangle\n");
    }
    else {
        printf("Scalene triangle\n");
    }

    return 0;
}

