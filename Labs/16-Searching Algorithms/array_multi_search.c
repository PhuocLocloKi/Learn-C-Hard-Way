/*
    Function: findAllIndices
    Description: Searches for all occurrences of a key in an array.
    Parameters:
    - arr[]: The source array to search.
    - key: The value to find.
    - arrResult[]: The array to store the found indices.
    - size: A pointer to track the number of indices found (dynamic counter).
*/

#include <stdio.h>

#define MAX_ELEMENT 1000

void inputArray(int array[], int *size);
void outputArray(int array[], int size);
int findListIndex(int arr[], int size, int key, int arrResult[]);

int main() {
    int array[MAX_ELEMENT];
    int size;

    // Input array
    inputArray(array, &size);

    // Output original array
    printf("Original array:\n");
    outputArray(array, size);

    int key;
    printf("Enter the value you want to find: ");
    scanf("%d", &key);

    int arrResult[MAX_ELEMENT];

    // Find all indexes of key in array
    int resultSize = findListIndex(array, size, key, arrResult);

    if (resultSize == 0) {
        printf("Value %d was not found in the array.\n", key);
    } else {
        printf("Indexes where value %d appears:\n", key);
        outputArray(arrResult, resultSize);
    }

    return 0;
}

/*
    Function: inputArray
    Purpose : Read array size and elements from keyboard
*/
void inputArray(int array[], int *size) {
    printf("Enter number of elements: ");
    scanf("%d", size);

    for (int i = 0; i < *size; i++) {
        printf("Array[%d] = ", i);
        scanf("%d", &array[i]);
    }
}

/*
    Function: outputArray
    Purpose : Print array elements
*/
void outputArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%4d", array[i]);
    }
    printf("\n");
}

/*
    Function: findListIndex
    Purpose : Find all indexes where arr[i] == key
    Return  : Number of found indexes
*/
int findListIndex(int arr[], int size, int key, int arrResult[]) {
    int count = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            arrResult[count] = i;  // store index
            count++;
        }
    }

    return count;
}
