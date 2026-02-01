/**
 * Removes all occurrences of a specific key from the array.
 * This is an efficient O(n) in-place approach.
 * @param arr: The target array.
 * @param size: Pointer to the array size to be updated.
 * @param key: The value to be removed.
 */

#include <stdio.h>
const int MAX_ELEMENT = 100;
void input(int arr[], int *size);
void output(int arr[], int size);
int removeAllKeyInArray(int arr[], int *size, int key);
int main(){
    int arr[MAX_ELEMENT];
    int size,key;
    input(arr, &size);
    output(arr, size);

    printf("Enter your favorite number to delete: ");
    scanf("%d",&key);
    removeAllKeyInArray(arr, &size, key);
    output(arr, size);
}

void input(int arr[], int *size) {
    printf("Enter the number of arrays as you like: ");
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

int removeAllKeyInArray(int arr[], int *size, int key){
    for(int i = *size - 1; i >= 0; i--){ 
        if(arr[i] == key){


            for(int j = i; j < *size - 1; j++){
                arr[j] = arr[j + 1];
            }
            (*size) --;
        }
    }
}
