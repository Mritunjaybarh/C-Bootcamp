/*. Write a program which takes the length of the sides of a triangle as an input. Display 
whether the triangle is valid or not.*/
#include<stdio.h>
int main()
{
	int b,h,l;
	printf("Input the length of triangle ");
	scanf("%d%d%d",&l,&b,&h);
	if(((l+b)>h)&&((b+h)>l)&&((h+l)>b))
	{
		printf("Triangle is valid .");
		
	}
	else
	{
		printf("Not a Valid triangle ");
	}
	
 } 
