/*Q 18. Write a program to find the sum of your four last digit of your university roll number .*/
/*2115500057*/
#include<stdio.h>
int main()
{
	int roll_no,x,sum=0,y;
	printf("enter the roll number:");
	scanf("%d",&roll_no);
	x=roll_no%10000;
	printf("the last four digits are : %04d\n",x);
	while (x!=0)
	{
		y=x%10;
		sum=sum+y;
		x=x/10;
	}
	printf("the sum of last four digits is: %d",sum);
	return 0;	
}
