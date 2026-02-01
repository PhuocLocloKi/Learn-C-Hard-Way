#include<stdio.h>

void intputArray(int arr[],int *size);
void outputArray(int arr[], int size);

int main(){
	int arr[100];
	int size;
	intputArray(arr, &size);
	outputArray(arr, size);
	return 0;
}
/*

Prompt in the tunnel
Enter - Address -> Name

Price -> *Name
*/

void intputArray(int arr[], int *size){
    printf("Nhap vao size di: ");
    scanf("%d",size);
    for(int i = 0; i <= *size - 1; i++){
        printf("\nArray[%d]= ",i);
        scanf("%d",&arr[i]);
    }
}
void outputArray(int arr[], int size){
    for(int i = 0; i <= size - 1; i++){
        printf("%2d",arr[i]);
    }
}

