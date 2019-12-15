#include<stdio.h>
int main()
{
    int n,i,x,pos,z=0;
    printf("Enter any number : ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("Please input %d element : ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter a number : ");
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        if(x==arr[i])
        {
            pos=i+1;
            z=1;
        }
    }
    if(z==1)
    {
        printf("Search successful and position no : %d\n");
    }
    else
    {
        printf("Search unsuccessful\n");
    }
    return 0;
}
