#include <stdio.h>
#include <ctype.h>

int main() {
    char str[20];
    int valid=1;

    printf("Enter identifier: ");
    scanf("%s",str);

    if(!isalpha(str[0])&&str[0]!='_')
        valid=0;

    for(int i=1;str[i]!='\0';i++)
        if(!isalnum(str[i])&&str[i]!='_')
            valid=0;

    if(valid)
        printf("Valid Identifier\n");
    else
        printf("Invalid Identifier\n");

    printf("\nStudent Information:\n");
    printf("Name: Mohit Tharu\n");
    printf("Roll No: 117\n");
    printf("Section: D\n");
    printf("Lab No: 08\n");

    return 0;
}
