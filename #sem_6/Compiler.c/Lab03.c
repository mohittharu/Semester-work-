#include <stdio.h>
#include <string.h>

int main() {
    char str[50];
    int choice, len;

    printf("Enter a binary string: ");
    scanf("%s", str);

    printf("\nChoose DFA Operation:\n");
    printf("1. String starts with 01\n");
    printf("2. String ends with 010\n");
    printf("3. String contains 011\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    len = strlen(str);

    switch (choice) {
        case 1:
            if (str[0] == '0' && str[1] == '1')
                printf("Accepted\n");
            else
                printf("Rejected\n");
            break;

        case 2:
            if (len >= 3 &&
                str[len-3] == '0' &&
                str[len-2] == '1' &&
                str[len-1] == '0')
                printf("Accepted\n");
            else
                printf("Rejected\n");
            break;

        case 3:
            if (strstr(str, "011"))
                printf("Accepted\n");
            else
                printf("Rejected\n");
            break;

        default:
            printf("Invalid Choice\n");
    }

    printf("\nStudent Information:\n");
    printf("Name: Mohit Tharu\n");
    printf("Roll No: 117\n");
    printf("Section: D\n");
    printf("Lab No: 3\n");

    return 0;
}
