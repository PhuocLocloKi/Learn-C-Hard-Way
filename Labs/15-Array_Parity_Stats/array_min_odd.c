//(Find the maximum even number in an array)
#include<stdio.h>
const int MAX_ELEMENT = 100;
void input(int array[], int *size);
void output(int array[], int size);
int checkOdd(int number);
int countOdd(int array[], int size);
int minOddArray(int array[], int size);

int main(){
    int array[MAX_ELEMENT];
    int size;
    input(array, &size);
    output(array, size);
    if(countOdd(array, size) == 0){
        printf("\nThere are no odd numbers at all!");
    }else{
        printf("\nSThe smallest odd number is:%d",minOddArray(array, size));
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
int countOdd(int array[], int size){
    int count = 0;
    for(int i = 0; i < size; i++){
        if(checkOdd(array[i])) 
            count++;
    }
    return count;
}
int minOddArray(int array[],int size){
	int min = array[0];
	int count = 0;
	for(int i = 0; i <= size; i++){
		if(checkOdd(array[i]) == 1){
			count++;
			if(array[i] < min){
				min = array[i];
			}
		}
	}
	return min;
}
