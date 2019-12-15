#include<stdio.h>
int main()
{
     int i,num1,num2;
    printf("Enter any number:");
    scanf("%d",&num1);
    printf("Enter any number:");
    scanf("%d",&num2);

    for(i=num1;i<=num2;i++)
    {
        if(i%2==0)
             printf("\n%d is the even number.",i);
        else
             printf("\n%d is the odd number.",i);
    }
}
