#include <stdio.h>

int main() {
    char str[20];
    printf("Enter line: ");
    scanf("%s",str);

    if(str[0]=='/'&&str[1]=='/')
        printf("Single line comment\n");
    else if(str[0]=='/'&&str[1]=='*')
        printf("Multi line comment\n");
    else
        printf("Not a comment\n");

    printf("\nStudent Information:\n");
    printf("Name: Mohit Tharu\n");
    printf("Roll No: 117\n");
    printf("Section: D\n");
    printf("Lab No: 05\n");

    return 0;
}
