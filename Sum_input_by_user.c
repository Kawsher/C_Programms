#include <stdio.h>

int main()
{
    int i,sum,nInput;
    printf("Enter the number:");
    scanf("%d",&nInput);
    sum=0;
    for(i=1;i<=nInput; i++){
            sum+=i;
    }
    printf("\n%d",sum);

}
