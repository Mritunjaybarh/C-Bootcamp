/*. Write a program to print unit digit of a given number*/
#include<stdio.h>
int main()
{
	int n;
	printf("Enter a no : ");
	scanf("%d",&n);
	n=n%10;
	printf("Unit Digit of Given no is %d",n);
	return 0;
}
