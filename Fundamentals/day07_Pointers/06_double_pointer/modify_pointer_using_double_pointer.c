#include <stdio.h>

/*
==================================================
MODIFY POINTER USING DOUBLE POINTER
==================================================

RULE:
- Pointer is passed BY VALUE
- To modify pointer itself → need ADDRESS of pointer
- That means: DOUBLE POINTER

==================================================
*/

void changePointer(int **pp, int *newAddress) {

    /*
        pp stores address of pointer p
        *pp is pointer p
    */

    *pp = newAddress;
    /*
        This changes p itself
    */
}

int main() {

    int a = 10;
    int b = 20;

    int *p = &a;

    printf("Before function:\n");
    printf("p points to a, value = %d\n\n", *p);

    /*
        Pass address of pointer p
    */
    changePointer(&p, &b);

    printf("After function:\n");
    printf("p now points to b, value = %d\n", *p);

    /*
        SUCCESS:
        - pointer p changed
        - because we used double pointer
    */

    return 0;
}
