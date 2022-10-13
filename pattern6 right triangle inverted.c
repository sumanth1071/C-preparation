// https://onlinegdb.com/YnaH7NG4o
#include<stdio.h>
void main()
{
    int i,j,k;
    printf("enter a number: ");
    scanf("%d",&k);
    for(i=0;i<k;i++)
    {
        for(j=k;j>i;j--)
        {
            printf("*");
        }
    printf("\n");
    }
}
