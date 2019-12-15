//Count digit of number
#include<stdio.h>
int main()
{
    int aNum,count=0;
    printf("Enter an Input:");
    scanf("%d",&aNum);

    while(aNum != 0)
    {
        ++count;
        aNum = aNum/10;
    }

    if(count == 0)
    {
       count++;
    }
    printf("You've entered %d digits",count);


}
