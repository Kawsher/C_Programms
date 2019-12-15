#include<stdio.h>
int main()
{
    int i,n;
    printf("Input the number table to be calculate:");
    scanf("%d",&n);

    for(i=1;i<=10;i++)
    {
        printf("\n%d * %d =%d",n,i,n*i);
    }
}
