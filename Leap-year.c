#include<stdio.h>
main()
{
  int year;
  printf("Enter the year to check:");
  scanf("%d",&year);
  if((year%400==0)||((year%100!=0)&&(year%4==0)))

  printf("%d   This year is leap year",year);

  else
  printf("%d   This year is not leap year",year);

}
