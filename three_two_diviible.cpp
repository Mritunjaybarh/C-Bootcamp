/* Write a program to check whether a given number is divisible by 3 and divisible by 2.*/
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter a no  :");
	scanf("%d",&a);
	if(a%6==0)
	printf("No is divisble by 3 and 2");
	else
	printf("No is not divisible by 3 and 2");
	return 0;
}
