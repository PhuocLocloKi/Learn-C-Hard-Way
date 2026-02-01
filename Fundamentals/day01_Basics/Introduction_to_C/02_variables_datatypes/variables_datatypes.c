#include <stdio.h>

// Global variable: Accessible everywhere
int global_n = 7; 

// Constant using Preprocessor
#define PI 3.14

int main() {
    // 1. Primitive DataTypes & Sizes
    int age = 15;             // 4 bytes: Integer
    float a = 5.5f;           // 4 bytes: Single precision float
    double gpa = 6.9;         // 8 bytes: Double precision float
    char text = 'B';          // 1 byte: Character (ASCII)
    long largeNum = 9000000L; // 8 bytes: Long integer

    // 2. Naming Conventions (Camel Case)
    int yearOfBirth = 2000;
    double gpaOfSe = 6.9;

    // 3. Constants (const keyword)
    const double MAX_SCORE = 10.0;
    // MAX_SCORE = 11; // This would cause an ERROR

    // 4. Variable Scope & Priority
    int global_n = 1; // Local variable with same name as global
    printf("Priority goes to Local: %d\n", global_n);

    // 5. Memory Address
    printf("Value: %d, Memory Address: %p\n", age, &age);

    return 0;
}