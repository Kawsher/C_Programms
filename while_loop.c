#include<stdio.h>
void main()
{
    long int bin_num,bin_tmp,dec_digit,dec_num=0,number_base=0;
    printf("Enter the Binary number:");
    scanf("%li",&bin_num);
    bin_tmp=bin_num;
    while (bin_num)

    {
       dec_digit=bin_num%10;
       dec_num+=dec_digit<<number_base;
       number_base++;
       bin_num/=10;
    }

   printf("\nDecimal Equivalent is:%li",dec_num);

}
