#include <stdio.h>
#include <string.h>

/*
==================================================
STRCPY FUNCTION
==================================================
Copies source string to destination
==================================================
*/

int main() {

    char source[] = "Kungfutech Academy";
    char destination[50];

    /*
        ❌ destination = source;  (ILLEGAL)
        String assignment is NOT allowed
    */

    strcpy(destination, source);

    printf("Source: %s\n", source);
    printf("Destination: %s\n", destination);

    return 0;
}
