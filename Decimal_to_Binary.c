#include<stdio.h>
#include<math.h>
int main()
{
     int bin=0,dec,rem,i=1;
     scanf("%d",&dec);
     while(dec!=0)
     {
         rem=dec%2;
         bin+=rem*i;
         dec/=2;
         i=i*10;
     }
     printf("Binary Equivalent:%d",bin);
     return 0;

}
