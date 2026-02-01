#include <stdio.h>
#include <string.h>

/*
==================================================
STRCMP FUNCTION
==================================================
Compare two strings lexicographically
==================================================
*/

int main() {

    char a[] = "Apple";
    char b[] = "Banana";
    char c[] = "Apple";

    printf("a vs b: %d\n", strcmp(a, b));
    printf("a vs c: %d\n", strcmp(a, c));
    printf("b vs a: %d\n", strcmp(b, a));

    /*
        strcmp returns:
        0  → strings equal
        <0 → first < second
        >0 → first > second
    */

    return 0;
}
