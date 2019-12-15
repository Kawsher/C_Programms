#include<stdio.h>
int main()
{
     int num,temp,sum=0;
    printf("Enter the number:\n");
    scanf("%d",&num);
    while (num !=0)
    {
        temp=num%10;
        sum+=temp;
        num/=10;

    }
    printf("Sum of digits:%d\n",sum);
}
