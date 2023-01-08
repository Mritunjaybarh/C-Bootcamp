/*Write a program to input a three-digit number and display the sum of the digits.*/
#include<stdio.h>
int main() 
{
	int n,a,b,c,sum ;
	printf("Enter the three digit No :");
	scanf("%d",&n);
	n=n/100;
	a=n/100;
	b=n/100;
	c=b%10;
	
	sum=a+b+c;
	printf("Sum of Three digit no  is %d :", sum);
	return 0;
	
	
	
	
}
