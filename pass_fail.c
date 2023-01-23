/*Write a program to take marks of 5 subjects from the user. Assume marks are given 
out of 100 and passing marks is 33. Now display whether the candidate passed the 
examination or failed*/
#include<stdio.h>
int main()
{
	int marks, m,p,c,e,h;
	printf("Enter the Marks of all 5 subject : ");
	scanf("%d%d%d%d%d",&m,&p,&c,&e,&h);
	if(marks<=33)
	printf("Student passed ");
	else
	printf("Student failed ");
	return 0;
}
