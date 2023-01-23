/*Write a program which takes the cost price and selling price of a product from the 
user. Now calculate and print profit or loss percentage*/
#include<stdio.h>
int main()
{
	double cp ,sp,profit,loss,prftpercent,losspercent;
	printf("Enter the cost price - ");
	scanf("%lf",&cp);
	printf("Enter the selling price ");
	scanf("%lf",&sp);
	profit= sp-cp;
	loss=cp-sp;
	prftpercent=((profit*100)/cp);
	losspercent=((loss*100)/sp);
	if(cp<sp)
	printf("Profit percentage is %f",prftpercent);
	else
	printf("Loss percentage is %f ",losspercent);
	return 0;
}
