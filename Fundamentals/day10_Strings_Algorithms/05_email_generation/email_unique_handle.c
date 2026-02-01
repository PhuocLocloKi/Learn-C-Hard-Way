#include <stdio.h>
#include <string.h>
#include <ctype.h>

/*
========================================================
UNIQUE EMAIL HANDLE
========================================================

PROBLEM:
- Duplicate names produce duplicate emails

SOLUTION:
- Add number suffix if email already exists

Example:
locnp@company.com
locnp1@company.com
========================================================
*/

int main() {

    char names[3][200] = {
        "Nguyen Phuoc Loc",
        "Nguyen Phuoc Loc",
        "Nguyen Phuoc Loc"
    };

    char emails[10][100];
    int emailCount = 0;

    for (int k = 0; k < 3; k++) {

        char name[200];
        strcpy(name, names[k]);

        for (int i = 0; i < strlen(name); i++) {
            name[i] = tolower(name[i]);
        }

        char words[10][50];
        int count = 0;

        char *token = strtok(name, " ");
        while (token != NULL) {
            strcpy(words[count++], token);
            token = strtok(NULL, " ");
        }

        char email[100] = "";

        // Build base email
        strcat(email, words[count - 1]);
        for (int i = 0; i < count - 1; i++) {
            char temp[2] = {words[i][0], '\0'};
            strcat(email, temp);
        }

        // Check duplicates
        int suffix = 0;
        char finalEmail[100];
        strcpy(finalEmail, email);

        for (int i = 0; i < emailCount; i++) {
            if (strcmp(emails[i], finalEmail) == 0) {
                suffix++;
                sprintf(finalEmail, "%s%d", email, suffix);
                i = -1; // restart checking
            }
        }

        strcat(finalEmail, "@company.com");
        strcpy(emails[emailCount++], finalEmail);

        printf("%s\n", finalEmail);
    }

    return 0;
}
