#include<stdio.h>
void main()
{
    int num;
    printf("Enter Your Number:");
    scanf("%d",&num);
    if(num>600)
    {
        printf("\nYou Passed in 1st Division");
    }
    else if(num>=450&&num<=599)
    {
        printf("\nYou Passed in 2nd Division");
    }
    else if(num>=300&&num<=449)
    {
        printf("\nYou Passed in 3rd Division");
    }
    else
    {
        printf("\nSorry,Failed!!!");
    }
}
