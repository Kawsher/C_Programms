#include <stdio.h>
#include <string.h>
int main()
{
    char str1[50] = "This is ", str2[50] = "programiz.com";
    strcat(str1,str2);
    puts(str1);
    puts(str2);
    return 0;
}
