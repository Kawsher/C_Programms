#include<stdio.h>

 int main()
{
    int i,n;
    float sum=0,term=0;
    printf("Program series:1/2+3/4+5/6+7/8......n/n+1");
    printf("\nEnter the number:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
             term =(float)i/(i+1);
             sum+=term;
             printf("\nTerm: %-5d/%-5d Value = %.4f Sum = %.4f",i,i+1, term, sum);
        }

    }  printf("\n\n");
      printf("\nFinal Result=%.2f",sum);

      getch();
      return 0;
}
