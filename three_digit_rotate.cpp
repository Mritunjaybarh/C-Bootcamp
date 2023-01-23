/*. Write a program to take a three-digit number from the user and rotate its digits by 
one position towards the right*/
#include<stdio.h>
int main()
{
  int n,a ;
  printf("Enter the Three digit no :");
  scanf("%d",&n);
  a=n/10;
  n=n%10;
  a=n*100+a;
  printf("No After rotate one position towards the right is %d :",a);
  return 0;
}
