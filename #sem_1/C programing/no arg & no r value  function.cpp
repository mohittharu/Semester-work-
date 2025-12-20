#include<stdio.h>
#include<conio.h>
int sum();  //function declaration(no arg)
void main 
{
	int s;
	clrscr();
	s=sum();     //function calling
	printf("Addition:%d",s);
	getch();
	
}
int sum()      //function defination
{
	int a,b,c;
	printf("Enter Two Number: ");
	scanf("%d%d",&a,&b);
	c=a+b;

	retur c;
}
