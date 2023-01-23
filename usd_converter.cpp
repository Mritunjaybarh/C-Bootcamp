/*. Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and 
convert it into USD.*/
#include<stdio.h>
int main()
{
	float n ,usd ;
	printf("Enter the amount :");
	scanf("%f",&n);
	n=n/76.23;
	printf("Your amount in USD is : %f ",n);
	return 0;
}
