#include<stdio.h>
void main()
{
    float i=1,z;
    printf("Gallon\tLitter\n");
    for(i;i<=10;i++)
    {
        z=i*3.785;
        printf("%.2f\t%.2f\n",i,z);
    }
}
