// Write a function for elements at even positions
//int sumEvenPosArray(int array[], int size)

#include<stdio.h>
int sumEvenPosArray(int array[], int size);

int main(){
    int array[100];
    int size;

    printf("Enter the array elements:");
    scanf("%d", &size);
    for(int i = 0; i < size; i++){
        printf("Order %d: ",i + 0);
        scanf("%d",&array[i]);
    }
    int sum = sumEvenPosArray(array, size);
    printf("Sum of even numbers: = %d",sum);
    return 0;
}
int sumEvenPosArray(int array[], int size){
    int sum = 0;
    printf("The position of the even number is determined as follows: ");
    for(int i = 0; i < size; i++){
        if(array[i] % 2 == 0){
            printf("%d", i);
            sum += array[i];
        }
    }
    printf("\n");
    return sum;
}
