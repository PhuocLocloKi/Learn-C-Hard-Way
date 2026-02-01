/**
 * Sorts the array in ascending order using Bubble Sort.
 * @param arr: The array to be sorted.
 * @param size: The number of elements in the array.
 */

#include <stdio.h>
const int MAX_ELEMENT = 100;
void input(int arr[], int *size);
void output(int arr[], int size);
void sort(int arr[], int size);
int main(){
    int arr[MAX_ELEMENT];
    int size;
    input(arr, &size);
    output(arr, size);

    sort(arr, size);
    printf("The sorted array is: ");
    output(arr, size);

    return 0;
}

void input(int arr[], int *size) {
    printf("Enter the number of arrays you want: ");
    scanf("%d", size);
    for (int i = 0; i < *size; i++) {
        printf("Array[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}

void output(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%3d", arr[i]);
    }
    printf("\n");
}
void sort(int arr[], int size){
    for(int i = 0; i <= size - 2; i++){
        for(int j = i + 1; j <= size - 1; j++){
            if(arr[i] > arr[j]){
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
}
