#include<stdio.h>

int main()
{
  int amount;
  printf("Enter amount:");
  scanf("%d",&amount);

  printf("\n1000 Taka: %d",amount/1000);
  amount%=1000;
  printf("\n500 Taka: %d",amount/500);
  amount%=500;
  printf("\n100 Taka: %d",amount/100);
  amount%=100;
  printf("\n50 Taka: %d",amount/50);
  amount%=50;
  printf("\n20 Taka: %d",amount/20);
  amount%=20;
  printf("\n10 Taka: %d",amount/10);
  amount%=10;
  printf("\n5 Taka: %d",amount/5);
  amount%=5;
  printf("\n2 Taka: %d",amount/2);
  amount%=2;
  printf("\n1 Taka: %d",amount);

}
