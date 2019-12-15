#include<stdio.h>
int main()
{
     int i,num;
     int prime=0,composite=0,temp=0;
    printf("\nEnter 0 to exit.....");
    printf("\n\nEnter any number:");
    scanf("%d",&num);

    do
    {
        for(i=2;i<=num%2;i++)
        {

        if(num%i==0)
           {
               temp=1;
           }
        }
      if(temp==0)
        prime++;
      else
        composite++;

        temp=0;
        printf("\n\nEnter any number:");
        scanf("%d",&num);

    }while(num != 0);
     printf("\nCount of primes numbers entered=%d",prime);
     printf("\nCount of composite numbers entered=%d",composite);

}
