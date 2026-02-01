// Calculate the sum of prime numbers in the range
//int sumPrime(int array[], int size);

//Method 2
//int checkPrime(int number);

//int sumPrimeArrayV2(int array[], int size);


//Method 1

#include<stdio.h>
int sumPrime(int array[], int size);

int main(){
    int array[1000];
    int size;
    printf("Enter the number of elements in the array you want to import frequently:");
    scanf("%d",&size);
    for(int i = 0; i < size; i++){
        printf("Order: %d: ", i + 0);
        scanf("%d", &array[i]);
    }
    int sum = sumPrime(array, size);
    printf("The sum of the prime numbers in the array is: %d", sum);
    return 0;
}
int sumPrime(int array[], int size){
    int sum = 0;
    for(int i = 0; i < size; i++){
        int count = 0;
        if(array[i] < 2){ 
            count++;

        }
        for(int j = 2; j < array[i]; j++){ 
            if(array[i] % j == 0){
                count++;
                break;
            }
        }
        if(count == 0){
            sum = sum + array[i];
        }
    }
    return sum;
}


//cach 2
#include<stdio.h>
int checkPrime(int number);
int sumPrime(int array[], int size);


int main(){
    int array[10] = {2, 3, 4, 5, 6 ,7 ,8, 9, 10, 11};
    int size = 10;
    int sum = sumPrime(array, size);
    printf("Tong cac so nguyen to trong mang la: %d",sum);
    return 0;
}
int checkPrime(int number){ // kiem tra so nguyen to
    if(number < 2){
        return 0;
    }
    for(int i = 2; i <= number - 1; i++){
        if(number % i == 0){
            return 0;
        }
    }
    return 1;
}
int sumPrime(int array[], int size){
    int sum = 0;
    for(int i = 0; i < size; i++){
        if(checkPrime(array[i]) == 1){ //neu la so nguyen to thi cong vao sum
            sum = sum + array[i];
        }
    }
    return sum;
}

