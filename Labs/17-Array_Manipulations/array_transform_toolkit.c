// /* --- BASIC ARRAY OPERATIONS --- */
// // Input: Get array size and elements from user
// void inputArray(int array[], int *size);
// // Output: Print all array elements to the console
// void outputArray(int array[], int size);
// /* --- ARRAY COPY & ASSIGNMENT --- */
// // Copy: Copy elements from Source array (S) to Main array (M)
// void cpyArray(int arrayS[], int sizeS, int arrayM[], int *sizeM);
// /* --- ARRAY CONCATENATION (Merging) --- */
// // Concatenate V1: Combine arr1 and arr2, then store the result in arr3
// // Steps: 1. Clear arr3 | 2. Append arr1 | 3. Append arr2
// void concatArrayV1(int arr1[], int size1, int arr2[], int size2, int arr3[], int *size3);
// // Concatenate V2: Directly append Source array (S) to the end of Main array (M)
// void concatArrayV2(int arrayS[], int sizeS, int arrayM[], int *sizeM);
// /* --- ARRAY REVERSE --- */
// // Reverse V1: Using a temporary array (The "Append-Reverse" technique)
// void reverseArrayV1(int arr[], int size);
// // Reverse V2: Using symmetric swap (Optimized logic: size - 1 - i)
// void reverseArrayV2(int arr[], int size);

#include <stdio.h>

const int MAX_ELEMENT = 1000;

void inputArray(int array[], int *size);
void outputArray(int array[], int size);

// copy array
void coppyArray(int arrayS[], int sizeS, int arrayM[], int *sizeM);

// array concatenation
void concatArrayV2(int arrayS[], int *sizeS, int arrayM[], int sizeM);
void concatArrayV1(int array1[], int size1, int array2[], int size2, int array3[], int *size3);

// reverse array
void reverseArrayV1(int array[], int size);
void reverseArrayV2(int array[], int size);

int main()
{
    int array[MAX_ELEMENT];
    int size;

    inputArray(array, &size);
    outputArray(array, size);

    // copy array
    int cppyArray[MAX_ELEMENT];
    int cppySize;
    coppyArray(array, size, cppyArray, &cppySize);

    printf("\nThe copied array is: ");
    outputArray(cppyArray, cppySize);

    // array concatenation
    int array2[MAX_ELEMENT];
    int size2;

    printf("\nEnter the second array:\n");
    inputArray(array2, &size2);

    printf("\nThe second array you just entered is: ");
    outputArray(array2, size2);

    concatArrayV2(array, &size, array2, size2);

    printf("\nThe merged array is: ");
    outputArray(array, size);

    // reverse array
    reverseArrayV1(array, size);
    printf("\nThe reversed array is: ");
    outputArray(array, size);

    reverseArrayV2(array, size);
    printf("\nArray after reversal: ");
    outputArray(array, size);

    return 0;
}

void inputArray(int array[], int *size)
{
    printf("Enter number of elements: ");
    scanf("%d", size);

    for (int i = 0; i < *size; i++)
    {
        printf("Index [%d] = ", i);
        scanf("%d", &array[i]);
    }
}

void outputArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%3d", array[i]);
    }
    printf("\n");
}

// copy array
void coppyArray(int arrayS[], int sizeS, int arrayM[], int *sizeM)
{
    *sizeM = sizeS;

    for (int i = 0; i < sizeS; i++)
    {
        arrayM[i] = arrayS[i];
    }
}

// array concatenation
void concatArrayV2(int arrayS[], int *sizeS, int arrayM[], int sizeM)
{
    if (*sizeS + sizeM > MAX_ELEMENT)
    {
        printf("Array overflow\n");
        return;
    }

    for (int i = 0; i < sizeM; i++)
    {
        arrayS[*sizeS] = arrayM[i];
        (*sizeS)++;
    }
}

void concatArrayV1(int array1[], int size1, int array2[], int size2, int array3[], int *size3)
{
    *size3 = size1 + size2;

    for (int i = 0; i < size1; i++)
    {
        array3[i] = array1[i];
    }

    for (int i = 0; i < size2; i++)
    {
        array3[size1 + i] = array2[i];
    }
}

// reverse array V1
void reverseArrayV1(int array[], int size)
{
    int tmq[size];

    for (int i = 0; i < size; i++)
    {
        tmq[i] = array[size - 1 - i]; // size - 1 is the last index
    }

    for (int i = 0; i < size; i++)
    {
        array[i] = tmq[i];
    }
}

// reverse array V2
void reverseArrayV2(int array[], int size)
{
    for (int i = 0; i < size / 2; i++)
    {
        int tmq = array[i];
        array[i] = array[size - 1 - i];
        array[size - 1 - i] = tmq;
    }
}
