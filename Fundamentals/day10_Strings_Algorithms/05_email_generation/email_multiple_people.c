#include <stdio.h>
#include <string.h>
#include <ctype.h>

/*
========================================================
EMAIL GENERATION FOR MULTIPLE PEOPLE
========================================================

THEORY:
- Process many names
- Each name generates one email
- Useful for employee/student systems
========================================================
*/

int main() {

    char names[5][200] = {
        "Nguyen Van Nam",
        "Tran Thi Thu",
        "Le Hoang Long",
        "Pham Minh Tuan",
        "Doan Duc Anh"
    };

    for (int k = 0; k < 5; k++) {

        char name[200];
        strcpy(name, names[k]);

        // Lowercase all characters
        for (int i = 0; i < strlen(name); i++) {
            name[i] = tolower(name[i]);
        }

        char words[10][50];
        int count = 0;

        char *token = strtok(name, " ");
        while (token != NULL) {
            strcpy(words[count], token);
            count++;
            token = strtok(NULL, " ");
        }

        // Generate email
        printf("%s", words[count - 1]);
        for (int i = 0; i < count - 1; i++) {
            printf("%c", words[i][0]);
        }
        printf("@company.com\n");
    }

    return 0;
}
