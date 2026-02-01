#include <stdio.h>

int main() {
    /**
     * FORMAT SPECIFIERS:
     * %d: int | %f: float | %lf: double | %c: char
     */
    
    int age;
    printf("Enter your age: ");
    // scanf reads input from keyboard. &age is the memory address.
    scanf("%d", &age); 
    printf("I am %d years old.\n", age);

    // Formatting Float Output
    float b = 3.75;
    printf("Default float: %f\n", b);     // 3.750000
    printf("Formatted (2 dec): %.2f\n", b); // 3.75
    printf("Width spacing: %8.2f\n", b);   // Total 8 characters wide

    // Multiple Inputs
    int x, y;
    printf("Enter two numbers (separated by comma e.g. 1,2): ");
    scanf("%d, %d", &x, &y); 
    printf("X: %d, Y: %d\n", x, y);

    return 0;
}