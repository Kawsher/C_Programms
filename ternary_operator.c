#include<stdio.h>
void main()
{
    int grade;
    char score;
    printf("Enter Your Number:");
    scanf("%d",&grade);
    score=(grade>=60)?'P':'F';
    printf("%c",score);
}
