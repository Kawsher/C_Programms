#include<stdio.h>
int main()
{
     int num,temp;
    printf("Enter the number:");
    scanf("%d",&num);
    printf("\nReverse number is:");

    while( num !=0)
    {
      temp=num%10;
      printf("%d",temp);
      num/=10;
    }

}
