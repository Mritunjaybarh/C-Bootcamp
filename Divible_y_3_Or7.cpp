/*. Write a program to check whether a given number is divisible by 7 or divisible by 3.*/
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter a no  :");
	scanf("%d",&a);
	if(a%7==0)
    	printf("No is divisble by 7");	  
	   else if(a%3==0)
	   printf("No is divisible by 3");
	else
	printf("No is not divisible by 7 or 3");
	return 0;
}
