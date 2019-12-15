#include<stdio.h>
main()
{
  int num1,num2;
  printf("Enter two numbers:");
  scanf("%d %d" ,&num1,&num2);

  if(num1<num2)
  {
    printf("\n %d the lowest number:",num1);
  }
  else if(num1>num2)
  {
    printf("\n %d  the lowest number:",num2);
  }
  else
  {
    printf("\nTwo numbers are equal");
  }

}

