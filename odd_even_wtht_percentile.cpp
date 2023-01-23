/*Write a program to check whether a given number is an even number or an odd 
number without using % operator.*/

#include<stdio.h>
int main()
{
 int n;
 printf("Enetr a no ");
 scanf("%d",&n);
 if((n&1)==0)
 printf("No is Even  ");
 else
 printf("No is odd ");
 return 0;
}
