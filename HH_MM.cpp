/*WAP to take time as an input in below given format and convert the time format and 
display the result as given below.
User Input date format – “HH:MM”
Output format – “HH hour and MM Minute”*/
#include<stdio.h>
int main()
{
	int HH,MM;
	printf("\"HH:MM\"");
	scanf("%d%d",&HH,&MM);
	printf("\"%d hour and %d Minute\" ",HH,MM);
	return 0;
}
