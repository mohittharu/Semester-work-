#include <stdio.h>
#include <string.h>

struct sym{
    char name[10],type[10];
    int addr;
}s[10];

int main(){
    int n;
    char key[10];

    printf("Enter number of symbols: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        printf("Enter name and type: ");
        scanf("%s %s",s[i].name,s[i].type);
        s[i].addr=i+100;
    }

    printf("Enter symbol to search: ");
    scanf("%s",key);

    for(int i=0;i<n;i++){
        if(strcmp(s[i].name,key)==0)
            printf("Found at %d type %s\n",s[i].addr,s[i].type);
    }

    printf("\nStudent Information:\n");
    printf("Name: Mohit Tharu\n");
    printf("Roll No: 117\n");
    printf("Section: D\n");
    printf("Lab No: 10\n");

    return 0;
}
