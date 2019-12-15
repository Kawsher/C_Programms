#include <stdio.h>

void main()
{
   int i, n;
   float sum = 0, term = 0;
   printf("Program for series:  1/2+2/3+3/4+4/5.........n/n+1");
   printf("\nEnter number: ");
   scanf("%d", &n);

   for(i = 1; i <= n; i++)
   {
      term = (float) i / (i+1);
      sum = sum + term;
      //printf("\nTerm: %-5d Value = %.4f Sum = %.4f", i, term, sum);
   }
   printf("\nSum of Series=%.2f",sum);
   printf("\n\n");
}
