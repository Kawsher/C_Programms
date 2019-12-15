#include<stdio.h>
int main()
{
    int tk;
    float cgpa;
    scanf("%f",&cgpa);
    scanf("%d",&tk);
    if(cgpa<=4.00 && cgpa>=3.80)
    {
        printf("Tuition fee=%d ",((tk*80)/100));
    }
    else if(cgpa<=4.00 && cgpa>=3.80)
    {
        printf("Tuition fee=%d ",((tk*85)/100));
    }
    else if(cgpa<=3.79 && cgpa>=3.75)
    {
        printf("Tuition fee=%d ",((tk*90)/100));
    }
    else if(cgpa<=3.74 && cgpa>=3.70)
    {
        printf("Tuition fee=%d ",((tk*95)/100));
    }
    else
    {
        printf("Tuition fee=%d",tk);
    }
    return 0;
}
