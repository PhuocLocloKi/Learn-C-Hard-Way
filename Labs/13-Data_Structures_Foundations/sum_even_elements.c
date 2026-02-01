// Write a function to calculate the sum of even elements
int sumEvenArray(int array[], int size);

#include<stdio.h>
int sumEvenArray(int array[], int size);

int main(){
    int array[100];
    int size;

    printf("Enter a single digit: ");
    scanf("%d",&size);
    for(int i = 0; i < size; i++){
        printf("Order %d = ", i + 0);
        scanf("%d",&array[i]);
    }
    int sum = sumEvenArray(array, size);
    printf("Sum of even numbers: = %d",sum);
}
int sumEvenArray(int array[], int size){
    int sum =0;
    for(int i = 0; i <= size; i++){
        if(array[i] % 2 == 0){
            sum += array[i];
        }
    }
    return sum;
}
