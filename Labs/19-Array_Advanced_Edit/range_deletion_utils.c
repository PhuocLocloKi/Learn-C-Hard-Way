/* Function: spliceArray
   Description: Removes a specific number of elements (amount) starting from a given position (pos).
   Returns: The number of elements successfully removed.
*/
//int spliceArray(int arr[], int* size, int pos, int amount);

/* Function: removeAllKeyInArray
   Description: Deletes every instance of a specific key from the array.
   Example: [1, 2, 3, 2] with key 2 becomes [1, 3].
*/

#include <stdio.h>
const int MAX_ELEMENT = 100;
void input(int arr[], int *size);
void output(int arr[], int size);

int spliceArray(int arr[], int *size, int pos, int amount);
int main(){
    int arr[MAX_ELEMENT];
    int size, pos, amount;
    input(arr, &size);
    output(arr, size);
     //Cách 1
    //spliceArray(arr, &size, 2, 3);
    //output(arr, size);


    printf("\nEnter the starting position for removal: ");
    scanf("%d", &pos);
    printf("Enter the desired number of elements to delete: ");
    scanf("%d", &amount);
    if (spliceArray(arr, &size, pos, amount)) {
        printf("The array after deletion is: ");
        output(arr, size);
    } else {
        printf("Invalid position, man! Please try again \n");
    }

    return 0;
}

void input(int arr[], int *size) {
    printf("Input any number of arrays you prefer: ");
    scanf("%d", size);
    for (int i = 0; i < *size; i++) {
        printf("Array[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}

void output(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%3d", arr[i]);
    }
    printf("\n");
}

int spliceArray(int arr[], int *size, int pos, int amount){
    int lastPosDelete = pos + amount - 1;
    if (pos < 0 || lastPosDelete >= *size || amount <= 0) {
        return 0;
    }
    for (int i = pos; i < *size - amount; i++) {
        arr[i] = arr[i + amount];
    }
    (*size) -= amount;

    return 1;
}
