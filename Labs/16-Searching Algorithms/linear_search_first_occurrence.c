// findFirstIndex: Find the first index.
// f(arr[], key): Function f with parameters arr[] and key.
// Check if the key exists in the array.
// If found, return the index of its first occurrence.
#include<stdio.h>
const int MAX_ELEMENT = 1000;
int findFirstIndex(int arr[], int key);
void inPut(int arr[], int *key);
void outPut(int arr[], int key);

int main(){
    int arr[MAX_ELEMENT];
    int key;
    inPut(arr, &key);
    outPut(arr, key);
    printf("Enter the number you want to find:)))): ");
    scanf("%d",&key);

    int result = findFirstIndex(arr, key); findFirstIndex;
    if (result != -1) { 
        printf("The position found is: %d\n", result);
    } else {
        printf("The requested index was not found!!!!!\n");
    }
    return 0;
}
void inPut(int arr[], int *key){
    printf("Enter the number of elements you want: ");
    scanf("%d", key);
    for(int i = 0;  i < *key; i++){
        printf("Order %d: ", i);
        scanf("%d",&arr[i]);
    }
}
void outPut(int arr[], int key){
    for(int i =0; i < key; i++){
        printf("%3d",arr[i]);
    }
    printf("\n");
}
int findFirstIndex(int arr[], int key){
    for(int i = 0; i < key; i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1; 
}
