#include<stdio.h>
 void namastey();  //declaration
 void bonjur();
 
 int main()
 {
 	char ch;
 	printf("Enter i for Indian and f for French:");
 	scanf("%c",&ch);
 
 	
 	if(ch=='i')
 	{
 	    namastey();
	 }
	 else
	 {
	    bonjur();
	 }
 	return 0;
 }
 
 void namastey() //defining
  
 {
 	printf("Namastey\n");
}
  void bonjur()
  {
  
 	printf("Bonjur");
 }
 
