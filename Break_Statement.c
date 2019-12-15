#include<stdio.h>
#include<math.h>

void main()
{
    int n;
    printf("First loop:\n");
    for(n=1;n<=100;n++)
    {
        if(n%2 == 0){
           continue;
        }
        printf("%d\t",n);
    }
}
