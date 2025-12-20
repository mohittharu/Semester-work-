#include <stdio.h>
#include <string.h>

int main() {
    char str[50];
    int i, j, len;

    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);

    printf("\nPrefixes:\n");
    for (i = 1; i <= len; i++) {
        for (j = 0; j < i; j++)
            printf("%c", str[j]);
        printf("\n");
    }

    printf("\nSuffixes:\n");
    for (i = 0; i < len; i++) {
        for (j = i; j < len; j++)
            printf("%c", str[j]);
        printf("\n");
    }

    printf("\nSubstrings:\n");
    for (i = 0; i < len; i++) {
        for (j = i; j < len; j++) {
            for (int k = i; k <= j; k++)
                printf("%c", str[k]);
            printf("\n");
        }
    }

    printf("\nStudent Information:\n");
    printf("Name: Mohit Tharu\n");
    printf("Roll No: 117\n");
    printf("Section: D\n");
    printf("Lab No: 1\n");

    return 0;
}
