#include <stdio.h>
int main()
{
	int a,b,c,d,e,f,g;
	printf("enter the first subject a:");
	scanf("%d",&a);
	printf("enter the subject subject b:");
	scanf("%d",&b);
	printf("enter the third subject c:");
	scanf("%d",&c);
	printf("enter the fourth subject d:");
	scanf("%d",&d);
	printf("enter the fifth subject e:");
	scanf("%d",&e);
	f=(a+b+c+d+e)/5;
	printf("the average  is %d\n",f);
	g=((a+b+c+d+e)/500)*100;
	printf("the percentage is %d",g);
	return 0;
}
