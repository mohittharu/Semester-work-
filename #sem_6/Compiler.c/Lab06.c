#include <stdio.h>

int main() {
    char ch;
    printf("Enter symbol: ");
    scanf(" %c",&ch);

    if(ch>='a'&&ch<='z')
        printf("FIRST(%c)={%c}\n",ch,ch);
    else
        printf("FIRST(%c)={terminals}\n",ch);

    printf("\nStudent Information:\n");
    printf("Name: Mohit Tharu\n");
    printf("Roll No: 117\n");
    printf("Section: D\n");
    printf("Lab No: 06\n");

    return 0;
}
