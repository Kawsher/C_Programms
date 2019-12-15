#include <stdio.h>
void  main()
{
   int i, n,num,sum=0;
   printf("\nHow many numbers you Want to add : ");
   scanf("%d", &n);

   for(i = 1; i <= n; i++)
   {
       printf("\nEnter %d number: ",i);
       scanf("%d",&num);
        sum+=num;
   }
   printf("\nResult=%d",sum);
   getch();
}
