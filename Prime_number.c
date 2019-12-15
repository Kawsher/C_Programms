#include<stdio.h>

void main()
{
    int num,i, prime=0;
    printf("Enter the number:");
    scanf("%d",&num);

    for (i=2;i<=num/2;++i)
    {
        if (num%i==0)
        {
            if (prime=1)
                break;
        }
    }



       if(prime==0)
        printf("\n%d is a Prime number.",num);


        else
         printf("\n%d is  not a Prime number.",num);





}
