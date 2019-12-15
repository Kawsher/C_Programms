#include<stdio.h>
int main()
{
    int i,n,min,max;
    min=9999;
    max=-999;
    for(i=1;i<=5;i++)
    {
        scanf("%d",&n);

        if(n>max)
        {
            max=n;
        }

        if(n<min)
        {
            min=n;
        }
    } printf("max %d: min %d",max,min);

}
