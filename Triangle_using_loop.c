#include<stdio.h>
int main()
{
     int i,j,k,l,n;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        {
           for(j=n;j>=i;j--)
           {
             printf(" ");
           }

          for(k=1;k<=i;k++)
          {
             printf("%d",k);
          }

          for(l=k-2;l>0;l--)
          {
            printf("%d",l);
          }

           printf("\n");
       }

}

