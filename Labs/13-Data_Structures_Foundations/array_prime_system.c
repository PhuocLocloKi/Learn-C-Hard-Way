#include<stdio.h>

const int MAX_ELEMENT = 100; 
void intputArray(int array[], int *size);

void outputArray(int array[], int size);

int isPrime(int n);
int sumPrimeArrayV2(int array, int size);

int main(){
	int array[MAX_ELEMENT];
	int size;
	intputArray(array, &size);
	outputArray(array, size);
}


void inputArray(int array[], int *size){
	printf("Enter your preferred network size: ");
	scanf("%d", size);
	for(int i = 0; i <= *size; i++){
		printf("\nArray[%d]: ",i);
		scanf("%d", &array[i]);
	}
}

void outputArray(int array[], int size){
	for(int i = 0; i < size; i++){
		printf("%5d", array[i]);
	}
}

int sumPrimeArray(int array[], int size){
	int sum = 0;
	for(int i= 0; i <= size - 1; i++){
		int isPrime = 1;
		if(array[i] >= 2){
			for(int j = 2; j <= array[i] - 1; j++ ){
				if(array[i] % j == 0){
					isPrime = 0;
					break;
				}
			}
			if(isPrime == 1){
				sum += array[i];
			}
		}
	}
	return sum;
}
