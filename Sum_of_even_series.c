#include<stdio.h>

int main()
{
    int n,i,sum=0;
    printf("Input any number:");
    scanf("%d",&n);
    printf("\nEven series is=");
    for(i=1;i<=n*2;i++)
    {
        if(i%2 ==0)
        {
            printf(" %d",i);
            sum+=i;
        }
    } printf("\nsum=%d",sum);
}
