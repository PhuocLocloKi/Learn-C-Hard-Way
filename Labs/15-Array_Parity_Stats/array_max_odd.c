// Find the maximum number of odd numbers in the array

#include<stdio.h>
const int MAX_ELEMENT = 100;
void input(int array[], int *size);
void output(int array[], int size);
int checkOdd(int number);
int maxOddArray(int array[], int size);

int main(){
    int array[MAX_ELEMENT];
    int size;
    input(array, &size);
    output(array, size);
    int max = maxOddArray(array, size);
    if(max == 0){
        printf("\nThere are no odd numbers:");
    }else{
        printf("\nThe largest odd number: %d",max);
    }

}
void input(int array[], int *size){
    printf("Enter the number of elements:");
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
int checkOdd(int number){
    if(number % 2 != 0){
        return 1;

    }else{
        return 0;
    }
}


int maxOddArray(int array[],int size){
    int max = 0;
    for(int i = 0; i < size; i++){
        if(checkOdd(array[i]) == 1){
            if(array[i] > max){
                max = array[i];
            }
        }
    }
    return max;
}
