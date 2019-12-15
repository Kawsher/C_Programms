//Count digit of number
#include<stdio.h>
int main()
{
    int aNum,q,reverse = 0;
    printf("Enter an Input:");
    scanf("%d",&aNum);
    int temp = aNum;

    while(aNum != 0)
    {
       q = aNum % 10;
       reverse = reverse*10 +q;
       aNum/=10;
    }

    printf("Revers of %d is %d",temp,reverse);


}
