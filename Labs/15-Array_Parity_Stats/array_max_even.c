
// Find the maximum number of even numbers in the array
#include<stdio.h>
const int MAX_ELEMENT = 100;
void input(int array[], int *size);
void output(int array[], int size);
int checkEven(int number);
int maxEvenArray(int array[], int size);

int main(){
    int array[MAX_ELEMENT];
    int size;
    input(array, &size);
    output(array, size);
    int max = maxEvenArray(array, size);

    if(max == 0){
        printf("\nThere is no even number.:");
    }else{
        printf("\nThe largest even number is: %d",max);

    }




}
void input(int array[], int *size){
    printf("enter the number of elements:");
    scanf("%d",size);
    for(int i = 0; i < *size; i++){
        printf("array[%d]= ",i);
        scanf("%d",&array[i]);
    }
    printf("\n");
}
void output(int array[], int size){
    for(int i = 0; i < size; i++){
        printf("%3d",array[i]);
    }
}
int checkEven(int number){
    for(int i = 0; i < number; i++){
        if(number % 2 == 0){
            return 1;
        }else{
            return 0;
        }
    }
    printf("\n");
}
int maxEvenArray(int array[],int size){
    int max = 0;
    for(int i = 0; i < size; i++){
        if(checkEven(array[i]) == 1){
            if(array[i] > max){
                max = array[i];
            }
        }
    }
    return max;
}
