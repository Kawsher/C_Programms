#include<stdio.h>

void main()
{
    int n,r,c;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("Enter the row:");
    scanf("%d",&r);
    printf("Enter the column:");
    scanf("%d",&c);
    int i,j,k,num[n][r][c];
    for(i=0;i<n;i++)
    {
        for(j=0;j<r;j++)
        {
            for(k=0;k<c;k++)
            {
                printf("Enter the element [%d] [%d] [%d]:",i,j,k);
                scanf("%d",&num[i][j][k]);
            }
        }
    }

    printf("Result=%d",num[0][1][0]);



}
