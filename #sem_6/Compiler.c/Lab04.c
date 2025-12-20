#include <stdio.h>

int main() {
    char str[20];
    int count = 0;

    printf("Enter string: ");
    scanf("%s", str);

    for(int i=0; str[i]!='\0'; i++) {
        if(str[i]=='a')
            count++;
    }

    if(count % 2 == 1)
        printf("Accepted\n");
    else
        printf("Rejected\n");
    printf("\nStudent Information:\n");
    printf("Name: Mohit Tharu\n");
    printf("Roll No: 117\n");
    printf("Section: D\n, Lab No:04\n");
    return 0;
}
