https://onlinegdb.com/bMudrITuDZ
#include <stdio.h>
int main()
{
    int i,j,l;
    printf("enter no of rows or columns\n");
    scanf("%d",&l);
    for(i=0;i<l;i++)
        {
            for(j=0;j<l;j++)
            {
               if(i==0||i==l-1||j==0||j==l-1)
               {
                   printf("*");
               }
               else
               {
                   printf(" ");
               }
            }
            printf("\n");
        }
    
}
