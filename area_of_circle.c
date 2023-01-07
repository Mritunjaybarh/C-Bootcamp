/*WAP to find the area of the circle. Take radius of circle from user as input and print the 
result in below given forma*/	
#include<stdio.h>
int main()
{
	float r, area;
	printf("Enter the radius of circle ");
	scanf("%f",&r);
	area=3.14*r*r;
	printf("Area of circle is : %f",area);
	return 0;
}
