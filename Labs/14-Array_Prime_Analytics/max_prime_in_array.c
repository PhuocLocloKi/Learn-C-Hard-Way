// Find the largest number among prime numbers
#include<stdio.h>
const MAX_ELEMENT = 100;
void inPutArray(int array[], int *size);
void outPutArray(int array[], int size);
int checkPrime(int number);
int maxPrimeArray(int array[], int size);

int main(){
	int array[MAX_ELEMENT];
	int size;
	inPutArray(array, &size);
	outPutArray(array, size);
	printf("MAX: %d",maxPrimeArray(array, size));
}
void inPutArray(int array[], int *size){
	printf("Input array:");
	scanf("%d",size);
	for(int i = 0; i < *size; i++){
		printf("Order: %d: ",i);
		scanf("%d",&array[i]);
	}
}
void outPutArray(int array[], int size){
	for(int i = 0; i < size; i++){
		printf("%2d",array[i]);
	}
	printf("\n");
}
int checkPrime(int number){
	if(number < 2){
		return 0;
	}
	for(int i = 2; i < number - 1; i++){
		if(number % i == 0){
			return 0;
		}
	}
	return 1;
}
int maxPrimeArray(int array[], int size){
	int max = 0;
	for(int i = 0; i < size - 1; i++){
		if(checkPrime(array[i]) == 1){
			if(array[i] > max){
				max = array[i];
			}
		}
	}
	return max;
}
