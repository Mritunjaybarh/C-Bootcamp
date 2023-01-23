/*. Write a program to check whether a given alphabet is in uppercase or lowercase*/
#include<stdio.h>
int main()
{
	char ch;
	printf("Enter an alphabet ");
	scanf("%c",&ch);
	if(ch>='a'&&ch<='z')
	printf("lowercase");
	else if(ch>='A'&&ch<='Z')
	printf("Uppercase");
	return 0;
}
