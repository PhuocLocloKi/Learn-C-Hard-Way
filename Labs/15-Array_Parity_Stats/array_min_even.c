//"Find the maximum even number in the array".
#include<stdio.h>
const int MAX_ELEMENT = 100;
void input(int array[], int *size);
void output(int array[], int size);
int checkEven(int number);
int countEvenArray(int array[], int size);
int minEvenArray(int array[], int size);

int main(){
    int array[MAX_ELEMENT];
    int size;
    input(array, &size);
    output(array, size);
    if(countEvenArray(array, size) == 0){
        printf("\nNo even numbers found.");
    }else{
        printf("The smallest even number is:%d",minEvenArray(array, size));
    }
}
void input(int array[], int *size){
    printf("Input the number of elements:");
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
int countEvenArray(int array[], int size){
    int count = 0; //tao bien
    for(int i = 0; i < size; i++){
        if(checkEven(array[i])){ //
            count++;
        }
    }
    return count;

}
int minEvenArray(int array[],int size){
	int min = array[0];
	int count = 0;
	for(int i = 0; i <= size; i++){
		if(checkEven(array[i]) == 1){
			count++;
			if(array[i] < min){
				min = array[i];
			}
		}
	}
	return min;
}
