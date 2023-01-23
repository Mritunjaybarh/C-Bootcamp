/*Write a program to print greater between two numbers. Print one number of both are the same.*/
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter a no:");
	scanf("%d",&a);
    printf("Enter a no:");
	scanf("%d",&b);
	if(a>b)
	printf("%d is Greater",a);
	else 
	printf("%d is Greater ",b);
	return 0;
}
