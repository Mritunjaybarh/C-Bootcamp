/* Write a program to print size of an int, a float, a char and a double type variable*/
#include<stdio.h>
int main()
{
	int integerType;
	char charType;
	float floatType;
	double doubletype;
	printf("Size of int is %d",(sizeof integerType));
	printf("\nSize of char is %d",(sizeof charType));
	printf("\nSize of float is %d",(sizeof floatType));
	printf("\nSize of double is %d",(sizeof doubletype));
	return 0;
	
}
