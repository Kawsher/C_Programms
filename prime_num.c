#include<stdio.h>
int main()
{
    int j,num=3,i,prime=1;
    for(j=1; j<=10;)
    {
        for(i=2; i<=num/2; i++)
        {
            if((num%i)==0)
            {
                prime=0;
                break;
            }
        }
        if(prime==1)
        {
            printf("%d ",num);
            j++;
        }
        prime=1;
        num++;
    }

    return 0;
}
