#include<stdio.h>
#include<conio.h>
#include <string.h>


int main()
{
    char ch[100];
    printf("Enter your string:");
    gets(ch);

    strupr(ch);

    printf("\n\nUppercase of string..: ");
    puts(ch);

    strlwr(ch);

    printf("\n\nLowercase of  string..: ");s
    puts(ch);

    strrev(ch);

    printf("\n\nReverse  of  string..: ");
    puts(ch);

    getch();

    return 0;
}
