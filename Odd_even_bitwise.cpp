/*Write a program to check whether the given number is even or odd using a bitwise 
operator.*/
#include<stdio.h>
int main()
{
	int a;
	printf("Enter a no :");
	scanf("%d",&a);
	a%2==0?printf("Number is even "):printf("number is odd");
	return 0;
	
}
