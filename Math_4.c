#include<stdio.h>
#include<math.h>

main()
{
   float a,b,c;
   printf("Please enter your value A:");
   scanf("%f",&a);
   printf("please enter your value B:");
   scanf("%f",&b);
   c= (pow(a,2)*sqrt(3))/4+sqrt(b)/5;
   printf("Solution of the equation=%f",c);

}

