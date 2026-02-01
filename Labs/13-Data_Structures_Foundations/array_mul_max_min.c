// Write a function to calculate the product of two elements, MAX and MIN
//int mulMaxMin(int array[], int size)

#include<stdio.h>
int mulMaxMin(int array[], int size);

int main(){
    int array[5] = {6, 55, 99, 9,12};
    int size = 5;
    int result = mulMaxMin(array, size);
    printf("The product of two free elements is the maximum and minimum: %d",result);
    return 0;
}
int mulMaxMin(int array[], int size){
    int max = array[0];
    int min = array[0];
    for(int i = 1; i < size; i++){
        if(array[i] > max){
            max = array[i];
        }
        if(array[i] < min){
            min = array[i];
        }
    }
    return max*min;
}
