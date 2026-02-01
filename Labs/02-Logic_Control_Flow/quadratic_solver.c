//ax^2 + bx + c = 0
//Solve the quadratic equation
//Input 3 real numbers representing a, b, c
//Simulate a Casio calculator
//Quadratic equation => sqrt(a)
//Cube equation => pow(a,(float)(1/3)

#include <stdio.h>
#include <math.h>

int main() {

    // ax^2 + bx + c = 0
    // Input three real numbers a, b, c

    float a, b, c;

    // Input coefficient a
    printf("Enter a: ");
    scanf("%f", &a);

    // Input coefficient b
    printf("Enter b: ");
    scanf("%f", &b);

    // Input coefficient c
    printf("Enter c: ");
    scanf("%f", &c);

    // Case 1: a == 0 (linear or degenerate equation)
    if (a == 0) {

        if (b == 0) {

            if (c == 0) {
                // 0x + 0 = 0
                printf("The equation has infinitely many solutions");
            } else {
                // 0x + c = 0 (c != 0)
                printf("The equation has no solution");
            }

        } else {
            // Linear equation bx + c = 0
            float x = -c / b;
            printf("The equation has one solution: x = %.2f", x);
        }

    }
    // Case 2: a != 0 (quadratic equation)
    else {

        // Calculate discriminant (delta)
        float delta = b * b - 4 * a * c;

        if (delta > 0) {
            // Two distinct real roots
            float x1 = (-b + sqrt(delta)) / (2 * a);
            float x2 = (-b - sqrt(delta)) / (2 * a);

            printf("The equation has two distinct solutions:\n");
            printf("x1 = %.2f\n", x1);
            printf("x2 = %.2f\n", x2);

        } 
        else if (delta == 0) {
            // Double root
            float x = -b / (2 * a);
            printf("The equation has a double root: x = %.2f", x);

        } 
        else {
            // delta < 0
            printf("The equation has no real solution");
        }
    }

    return 0;
}
