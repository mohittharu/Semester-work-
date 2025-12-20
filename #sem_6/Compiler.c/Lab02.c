#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[20];
    char keywords[5][10] = {"int", "float", "char", "if", "else"};
    int i, valid = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    for (i = 0; i < 5; i++) {
        if (strcmp(str, keywords[i]) == 0) {
            printf("Keyword\n");

            printf("\nStudent Information:\n");
            printf("Name: Mohit Tharu\n");
            printf("Roll No: 117\n");
            printf("Section: D\n");
            printf("Lab No: 2\n");

            return 0;
        }
    }

    if (!isalpha(str[0]) && str[0] != '_')
        valid = 0;

    for (i = 1; str[i] != '\0'; i++) {
        if (!isalnum(str[i]) && str[i] != '_')
            valid = 0;
    }

    if (valid)
        printf("Valid Identifier\n");
    else
        printf("Invalid Identifier\n");

    printf("\nStudent Information:\n");
    printf("Name: Mohit Tharu\n");
    printf("Roll No: 117\n");
    printf("Section: D\n");
    printf("Lab No: 2\n");

    return 0;
}
