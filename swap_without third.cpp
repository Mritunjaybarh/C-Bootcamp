/* Write a program to swap values of two int variables without using a third variable.*/
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter two no ");
	scanf("%d%d",&a,&b);
	 a=a+b;
	 b=a-b;
	 a=a-b;
	 printf("After swapping a=%d b=%d ",a,b);
	 return 0;
}
