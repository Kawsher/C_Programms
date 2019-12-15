#include<stdio.h>
void main()
{
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);

    if(ch =='a'||'e'||'i'||'o'||'u'||'A'||'E'||'I'||'O'||'U')
    {
        printf("\nYou Entered vowel.\n");
    }
    else
    {
        printf("\nYou Entered consonant.\n");
    }
}
