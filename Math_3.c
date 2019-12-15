#include<stdio.h>
#include<math.h>

main()
{
  float p,q,r,n,z;


  printf("\nPlease enter your value P:");
  scanf("%f",&p);
  printf("\nPlease enter your value Q:");
  scanf("%f",&q);
  printf("\nPlease enter your value R:");
  scanf("%f",&r);
  printf("\nPlease enter your value N:");
  scanf("%f",&n);



  z =p/q+pow(r,n);

  printf("Your result %f",z);



}
