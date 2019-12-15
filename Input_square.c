#include <stdio.h>

int main()
{
    char ch;
    int i, j, N;
    printf("Enter character: ");
    scanf("%c",&ch);
    printf("Enter number of rows: ");
    scanf("%d",&N);
    for(i=1; i<=N; i++)
    {
        for(j=1; j<=N; j++)
        {
            printf("%c",ch);
        }
        printf("\n");
    }

    return 0;
}
