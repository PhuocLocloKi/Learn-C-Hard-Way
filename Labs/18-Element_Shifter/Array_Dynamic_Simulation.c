/**
 * Insert a key into a specific position in the array.
 * @param arr: The target array.
 * @param size: Pointer to the current number of elements.
 * @param key: The value to be inserted.
 * @param pos: The target index (position).
 */

#include<stdio.h>

const int MAX_ELEMENT = 100;

void input(int array[], int *size);
void output(int array[], int size);
int insertKeyToPositionInArray(int arr[], int *size, int key, int pos);


int main(){
    int array[MAX_ELEMENT];
    int size, key, pos;

    input(array, &size);
    output(array, size);

    printf("Nhap vao gia tri ma ban muon chen: ");
    scanf("%d",&key);
    printf("Nhap vao vi tri do de chen: ");
    scanf("%d",&pos);

    insertKeyToPositionInArray(array, &size,key, pos);
    printf("Hoat tat sau khi chen: ");
    output(array, size);



}
void input(int array[], int *size){
    printf("Nhap so theo yeu cau: ");
    scanf("%d",size);
    for(int i = 0; i < *size; i++){
        printf("array[%d] = ",i);
        scanf("%d",&array[i]);
    }
}
void output(int array[], int size){
    for(int i = 0; i < size; i++){
        printf("%3d",array[i]);
    }
    printf("\n");
}
int insertKeyToPositionInArray(int arr[], int *size, int key, int pos){
    // 1   2   3   4   5
    if(pos < 0 || pos > *size) return 0;
    for(int i = *size - 1; i >= pos; i--){
        arr[i+1] = arr[i];
    }
    arr[pos] = key;
    (*size)++;
    return 1;
}


