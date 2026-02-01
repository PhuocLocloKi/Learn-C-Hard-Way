
#include<stdio.h>
const int MAX_ELEMENT = 100;
void inPutArray(int array[], int *size);
void outPutArray(int array[], int size);
int isPrime(int n);
int minPrimeArray(int array[], int size);

int main(){
	int array[MAX_ELEMENT];
	int size;
	inPutArray(array, &size);
	outPutArray(array, size);
    printf("min: %d",minPrimeArray(array, size));

}
void inPutArray(int array[], int *size){
	printf("Input the required array: ");
	scanf("%d",size);
	for(int i = 0; i < *size; i++){
		printf("Order Array %d: ",i);
		scanf("%d",&array[i]);
	}
}
void outPutArray(int array[], int size){
	for(int i = 0; i < size; i++){
		printf("%2d ",array[i]);
	}
	printf("\n");
}
int isPrime(int n){
	if(n < 2){
		return 0;
	}
	for(int i = 2; i < n - 1; i++){
		if(n % i == 0){
			return 0;
		}
	}
	return 1;
}
int minPrimeArray(int array[], int size){
	int min = array[0];
	int count = 0;
	for(int i = 0; i <= size - 1; i++){
		if(isPrime(array[i]) == 1){
			count++;
			if(array[i] < min){
				min = array[i];
			}
		}
	}
	if(count == 0){
		return 0;
	}
	return min;
}


