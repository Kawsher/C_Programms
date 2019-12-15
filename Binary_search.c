#include<stdio.h>
int main()
{
    int i,j,s,num,temp,array[10];
    int search,low,high,mid;
    printf("Enter the value of number:");
    scanf("%d",&num);
    printf("Enter the elements one by one:");
    for(i=0;i<num;i++)
    {
        scanf("%d\n",&array[i]);
    }
    printf("Enter the element to be searched : ");
    scanf("%d",&search);
    low=1;
    high=num;
    do
    {
        mid=(high+low)/2;
        if(array[mid]>search)
        {
            high=mid-1;
        }
        else if(array[mid]<search)
        {
           low=mid+1;
        }
    }while(search != array[mid] && low <=high);

    if(search==array[mid])
    {
        printf("Search successful\n");
    }
    else
    {
        printf("Search failed\n");
    }
}
