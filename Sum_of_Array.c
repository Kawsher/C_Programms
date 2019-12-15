#include<stdio.h>
void main()
{
    int n,sum=0;
    printf("Enter seize of array:");
    scanf("%d",&n);
    int i,number[n];


    for(i=0;i<n;i++)
      {
         printf("Element %d:",i+1);
         scanf("%d",&number[i]);
      }

     for (i=0;i<n;i++)
       {
          printf("\nElement %d: %d",i+1,number[i]);
       }

     for (i=0;i<n;i++)
     {
         sum+=number[i];
     }

     printf("\nSum=%d",sum);


}

