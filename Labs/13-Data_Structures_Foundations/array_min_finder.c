// Write a function to find the smallest number in an array
//int minArray(int array[],int size);

#include<stdio.h>
int minArray(int array[], int size);

int main(){
    int array[10] = {9999, 99, 68, 78, 55, 66, 10000, 678, 879, 90};
    int size = 10;
    int min = minArray(array, size);
    printf("The smallest number in the array is: %d",min);
    return 0;
}
int minArray(int array[], int size){
    int min = array[0];
    for(int i = 0; i < size; i++){
        if(array[i] < min){
            min = array[i];
        }
    }
    return min;
}
