#include<stdio.h>

void main()
{
    int r,c;
    printf("Enter the row:");
    scanf("%d",&r);
    printf("Enter the column:");
    scanf("%d",&c);
    int i,j,num[r][c];

    for(i=0;i<=r;i++)
    {
        for(j=0;j<=c;j++)
        {
            scanf("%d",&num[i][j]);

        }
    }
    printf("Result=%d",num[2][2]);

}
