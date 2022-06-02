#include<stdio.h>
int main()
{
	int salary,basic_pay,HRA,TA;
	
	printf("enter your basic pay:");
	scanf("%d",&basic_pay);
	HRA=(15*basic_pay)/100;
	TA=(20*basic_pay)/100;
	salary=HRA+TA;
	printf("the total salary is : %d",salary);
	return 0;
	
}
