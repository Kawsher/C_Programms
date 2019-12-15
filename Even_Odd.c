#include<stdio.h>

void main()
{
    int num;
    printf("Please Enter Your Number:");
    scanf("%d",&num);

    if(num % 2 == 0)
    {
        printf("%d is even",num);
    }
    else if(num % 2 != 0)
    {
        printf("%d is odd",num);
    }
    getch();
}
