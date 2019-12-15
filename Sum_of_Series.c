#include<stdio.h>

void main()
{
    int i,n;
    float sum=0,term=0;
    printf("Number of series:1/2+2/3+3/4+4/5+.......n/n+1");

    printf("\nEnter the number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        term = (float) i / (i+1);
        sum+=term;
        printf("\nTerm: %-5d/%-5d Value = %.2f Sum = %.2f", i,i+1,term, sum);

    }
    printf("\n\n\nFinal Result=%.2f",sum);

    getch();
}
