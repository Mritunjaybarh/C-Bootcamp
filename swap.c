/* Write a program to swap values of two int variables*/
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter two no : ");
	scanf("%d%d",&a,&b);
	printf("Before swapping a = %d and b = %d",a,b);
	c=a;
	a=b;
	b=c;
	printf("\nAfter Swapping a =%d and b =%d ",a,b);
	return 0;
}
