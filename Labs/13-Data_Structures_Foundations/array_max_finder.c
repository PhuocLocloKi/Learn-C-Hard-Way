// Write a function to find the largest number in an array
//int maxArray(int array[], int size);

#include<stdio.h>
int maxArray(int array[], int size);

int main(){
    int array[1000];
    int size;
    printf("Enter the number of elements you want to print: ");
    scanf("%d",&size);
    for(int i = 0; i < size; i++){
        printf("Order %d: ",i + 0);
        scanf("%d", &array[i]);
    }
    int max = maxArray(array, size);
    printf("The largest number in the array is: %d", max);
}
int maxArray(int array[], int size){
    int max = 0;
    for(int i = 0; i < size; i++){
        if(array[i] > max){
            max = array[i];
        }
    }
    return max;
}
