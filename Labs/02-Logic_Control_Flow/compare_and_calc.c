//Input two numbers a and b
//If a > b, output the sum a + b
//If a < b, output the quotient a / b

//✅ Version 1 – Basic conditional handling (sum or division)

#include <stdio.h>

int main() {

    int a, b;

    // Input value of a
    printf("Enter a: ");
    scanf("%d", &a);

    // Input value of b
    printf("Enter b: ");
    scanf("%d", &b);

    // Handle conditions
    if (a > b) {
        // Calculate sum when a is greater than b
        int sum = a + b;
        printf("Result: %d", sum);
    } else {
        // Calculate division when a is less than or equal to b
        float quotient = (float)a / b;
        printf("Result: %.2f", quotient);
    }

    return 0;
}

//✅ Version 2 – Full expression output (more explicit)

#include <stdio.h>

int main() {

    int a, b;

    // Input value of a
    printf("Enter a: ");
    scanf("%d", &a);

    // Input value of b
    printf("Enter b: ");
    scanf("%d", &b);

    // Check conditions and print full expression
    if (a > b) {
        // Print sum expression
        printf("%d + %d = %d", a, b, a + b);
    } 
    else if (a < b) {
        // Print division expression
        // Cast to float to avoid integer division
        printf("%d / %d = %.2f", a, b, (float)a / b);
    }

    return 0;
}
