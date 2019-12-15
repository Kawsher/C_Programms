//Swap two variable without using temporary variable
#include<stdio.h>
int main()
{
    int a=12,b=15;

    a = a+b;
    b = a-b;
    a = a-b;

    printf("%d",a);
    printf("\n%d",b);
}
