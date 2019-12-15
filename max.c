#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x,y,max;
    FILE *fp;
    scanf("%d %d",&x,&y);
    fp=fopen("max.txt","w");
    if(x>y)
    {
        max=x;
    }
    else
    {
        max=y;
    }
    fprintf(fp,"%d",max);

}

