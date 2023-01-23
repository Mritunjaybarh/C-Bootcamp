/*Write a program to check whether a given number is a three-digit number or no*/
#include<stdio.h>
int main()
{
 int n;
 printf("Enetr a no ");
 scanf("%d",&n);
 if(100>=n>1000)
 printf("This  is Three digit no ");
 else
 printf("This is not Three digit no");
 return 0;
}
