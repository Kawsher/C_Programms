#include<stdio.h>
int main()
{
    int a[100], i, j, Size, Temp;
    printf("\nPlease Enter the size of an array: ");
    scanf("%d",&Size);
    for (i = 0; i < Size; i++)
    {
        scanf("%d", &a[i]);
    }
    j = i - 1;
    i = 0;
    while (i < j)
    {
        Temp = a[i];
        a[i] = a[j];
        a[j] = Temp;
        i++;
        j--;
    }
    printf("\nResult of an Reverse array is: ");
    for (i = 0; i < Size; i++)
    {
        printf("%d  ", a[i]);
    }
    return 0;
}
