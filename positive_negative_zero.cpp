/*write a program to check whether a given number is positive, negative or zero.*/
#include<stdio.h>
int main()
{
	int n;
	printf("Enter a no : ");
	scanf("%d",&n);
	if(n>=1)
	printf("No is positive ");
	else if(n==0)
	printf(" No is zero "); 
	else 
	printf("No is negative");
	return 0;
}
