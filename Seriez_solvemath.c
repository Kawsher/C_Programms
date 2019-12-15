#include<stdio.h>
int main()
{
    int i,n,sum=0;
    scanf("%d",&n);
    if((n==1)||(n%3==1))
    {
      for(i=1;i<=n;i=i+3)
      {
        sum+=(i*(i+1)*(i+2));
      }
      printf("%d",sum);
    }
    else
    {
        printf("Wrong");
    }
    return 0;
}
