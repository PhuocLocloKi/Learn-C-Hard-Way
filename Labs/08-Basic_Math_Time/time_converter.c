//1. Time Calculation
//Enter the number of seconds and print it in the format 00:00:00
//Example: 3660 -> 01:01:00


#include <stdio.h>

int main() {

    int seconds;

    // Input total seconds
    printf("Enter total seconds: ");
    scanf("%d", &seconds);

    // Calculate hours
    int hours = seconds / 3600;

    // Get remaining seconds after extracting hours
    seconds = seconds % 3600;

    // Calculate minutes
    int minutes = seconds / 60;

    // Get remaining seconds
    int remainingSeconds = seconds % 60;

    // Print time in HH:MM:SS format
    printf("%02d:%02d:%02d\n", hours, minutes, remainingSeconds);

    return 0;
}
