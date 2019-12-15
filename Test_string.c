#include<stdio.h>
void main()
{
    char ch[100];
    printf("Enter the string:");
    scanf("%s",&ch);
    strlwr(ch);
    printf("You Entered:%s",ch);

}
