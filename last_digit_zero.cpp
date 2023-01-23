/*Write a program to make the last digit of a number stored in a variable as zero. 
(Example - if x=2345 then make it x=2340)*/
#include<stdio.h>
int main()
{
	int n,a;
	printf("Enter a number :");
	scanf("%d",&n);
	a=n%10;
	n=n-a;
	printf(" Last digit Number stored in a variable as zero is %d ",n);
	return 0;
}
