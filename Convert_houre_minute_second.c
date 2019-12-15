#include<stdio.h>
void main()
{
    int time;
    printf("Please input the time in second:");
    scanf("%d",&time);

    printf("\n  %d Hour.",time/3600);
    time%=3600;
    printf("\n  %d Minute.",time/60);
    time%=60;
    printf("\n  %d Second.",time);
}
