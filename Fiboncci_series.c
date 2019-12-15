#include<stdio.h>
int main()
{
    int i,n,num1=0,num2=1,sum=0;
    printf(" 0 1 ");
    for(i=1;i<=10;i++)
    {
        sum=num1+num2;
        printf("%d ",sum);
        num1=num2;
        num2=sum;
    }

}
