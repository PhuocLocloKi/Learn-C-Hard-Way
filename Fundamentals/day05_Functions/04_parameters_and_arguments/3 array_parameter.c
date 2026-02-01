#include <stdio.h>

/*
==================================================
PASSING ARRAYS AS FUNCTION PARAMETERS
==================================================

IMPORTANT FACT:
- When you pass an array to a function,
  you are actually passing the ADDRESS of the array.

This means:
- Changes inside the function
  affect the original array.

SYNTAX:

    void functionName(int arr[], int size)
==================================================
*/


/*
--------------------------------------------------
FUNCTION PROTOTYPE
--------------------------------------------------
This function receives:
- an integer array
- the size of the array
*/
void printArray(int arr[], int size);
int calculateSum(int arr[], int size);


/*
--------------------------------------------------
MAIN FUNCTION
--------------------------------------------------
*/
int main() {

    int numbers[] = {10, 20, 30, 40, 50};
    int size = 5;

    /*
        Passing array to function
        Only the array name is needed
    */
    printArray(numbers, size);

    int sum = calculateSum(numbers, size);
    printf("Sum of array = %d\n", sum);

    return 0;
}


/*
--------------------------------------------------
FUNCTION DEFINITIONS
--------------------------------------------------
*/
void printArray(int arr[], int size) {

    /*
        arr is the PARAMETER
        numbers is the ARGUMENT
    */
    printf("Array elements:\n");

    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
}


int calculateSum(int arr[], int size) {

    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    return sum;
}
