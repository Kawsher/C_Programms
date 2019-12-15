#include<stdio.h>
int main()
{
    int i,j,n,num;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int fact=1;
        printf("Input the number:");
        scanf("%d",&num);
        for(j=1;j<=num;j++)
        {
            fact=fact*j;
        }
        printf("Factorial is =%d\n",fact);
    }

}
