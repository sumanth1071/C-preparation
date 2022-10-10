// https://onlinegdb.com/O2xYtUbxc
#include <stdio.h>
int main()
{
    int i,j,r,c;
    printf("enter no of rows or columns\n");
    scanf("%d",&r);
    printf("enter no of rows or columns\n");
    scanf("%d",&c);
    for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                printf("*");
            }
            printf("\n");
        }
    
}
