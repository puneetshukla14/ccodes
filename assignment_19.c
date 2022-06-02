/*Q19. Write a program to initialize your height and weight in cm. 
and kgs respectively demonstrating compile time initialization and convert them in feets and pounds respectively.  
Note :- 1 cm = 0.393701inch , 1 Kg = 2.20462*/
#include<stdio.h>
#include<math.h>
int main()
{ float h,w,feet,pound;
printf("enter your height in cm:");
scanf("%f",&h);
printf("enter your weight in kgs:");
scanf("%f",&w);
feet=0.0328*h;
printf("the height in feet is : %.2f\n",feet);
pound=w*2.20462;
printf("the weight in pound is :%.2f",pound);
return 0;
}



