#include<stdio.h>
int main()
{
    int i,T,num,n,sum;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&n);
        sum=0;
        for(i=0;i<n;i++)
        {

            scanf("%d",&num);
            sum+=num;
        }
        printf("%d\n",sum);
    }

    return 0;
}
