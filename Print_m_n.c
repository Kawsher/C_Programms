#include<stdio.h>
int main()
{
     int i,num1,num2;
    printf("Enter the value of number:");
    scanf("%d",&num1);
    printf("\nEnter the value of number bigger than before number:");
    scanf("%d",&num2);

    for(i=num1;i<=num2;i++)
    {
        printf("%d\t",i);
    }
}
