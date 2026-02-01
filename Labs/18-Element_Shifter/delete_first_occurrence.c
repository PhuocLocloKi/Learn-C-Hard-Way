/**
 * Delete the first occurrence of a key in the array.
 * @param arr: The target array.
 * @param size: Pointer to the current number of elements.
 * @param key: The value to be removed.
 */

#include<stdio.h>

int deleteArray(int arr[], int *size, int key){
    //1 2 * 4 5
    int pos = -1;
    for(int i = 0; i <= *size - 1; i++){
        if(arr[i] == key){
            pos = i;
        }
    }

    for(int i = pos ; i <= *size - 1; i++){
        arr[i] = arr[i + 1];
    }

    (*size)--;

    return 1;
}
