#include <stdio.h>

int main() {
    char op;
    printf("Enter operator: ");
    scanf(" %c",&op);

    if(op=='+'||op=='-'||op=='*'||op=='/'||op=='=')
        printf("Valid Operator\n");
    else
        printf("Invalid Operator\n");

    printf("\nStudent Information:\n");
    printf("Name: Mohit Tharu\n");
    printf("Roll No: 117\n");
    printf("Section: D\n");
    printf("Lab No: 09\n");

    return 0;
}
