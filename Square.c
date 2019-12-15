#include<stdio.h>
int main()
{
    int i,j,k,n,num;
    char ch,dh;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       scanf("%d %c %c",&num,&ch,&dh);
       for(j=1;j<=num;j++)
       {
           for(k=1;k<=num;k++)
           {
               if(j==k)
                {
                    printf("X");
                }
               else if(k<j)
                {
                    printf("%c",ch);
                }
                else
                {
                    printf("%c",dh);
                }
           }
           printf("\n");

       }

    }
}
