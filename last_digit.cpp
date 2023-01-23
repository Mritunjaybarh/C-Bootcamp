/* Write a program to print a given number without its last digit.*/
#include<stdio.h>
int main()
{
	int n;
	printf("Enter a no : ");
	scanf("%d",&n);
	n=n/10;
	printf("Without last digit of Given no is %d",n);
	return 0;
}
