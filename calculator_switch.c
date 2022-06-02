#include<stdio.h>
int main()
{
	double a,b;
	int c;
	printf("enter the number:");
	scanf("%lf",&a);
	printf("enter the number:");
	scanf("%lf",&b);
	printf("enter the operation you want to perform\n");
	printf("1.addition\n2.subtraction\n3.division\n4.multiplication\n");
	scanf("%d",&c);
	switch (c)
	{
		case 1:
			printf("the sum of the number is %lf",a+b);
			break;
		case 2:
			printf("the differnce of the number is %lf",a-b);
			break;
		case 3:
			printf("the result of the number is %.2lf",a/b);
			break;
		case 4:
			printf("the product of the number is %.2lf",a*b);
			break;
		default :
			printf("enter the valid number");
	}
	return 0;
	
}
