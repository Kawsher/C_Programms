#include<stdio.h>

main()
{
    printf("Enter Input In Second:");
    int nSecond;
    scanf("%d",&nSecond);
    if((nSecond/3600)>0)
    {
       printf("\nTotal Hour: %d",nSecond/3600);
       nSecond %=3600;
    }
     if((nSecond/60)>0)
    {
       printf("\nTotal Minute: %d",nSecond/60);
       nSecond %=60;
    }
    if(nSecond>0)
    {
        printf("\nTotal Second: %d",nSecond);
    }

}
