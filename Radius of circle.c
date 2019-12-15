#include<stdio.h>
#define PI 3.1416497485742525297591596545

main()
{

  float radius,area;
  printf("Enter Radius of circle:");
  scanf("%f",&radius);
  area=PI*radius*radius;
  printf("The area of circle is %.2f",area);
}
