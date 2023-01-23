/*Write a program to check whether roots of a given quadratic equation are real & 
distinct, real & equal or imaginary roots*/
#include<stdio.h>
int main()
{
	int d,b,a,c;
	printf("Enter the roots of quadratic equation :");
	scanf("%d",&d);
	//d=(b*b)-4ac;
	if(d>0)
	{
	printf("Roots are real and distinct ");
     {
    if(d==0)
    	printf("Roots are real and equal");
     } 
    }
	else
        printf("Roots are imaginary ");
	
	return 0;
}
