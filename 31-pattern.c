#include<stdio.h>
void main()
{
    int i,j,n=1;
    for(i=1;i<=5;i++)
    {
        printf("\n");
        n=1;
        for(j=1;j<=i;j++)
        {
            printf("%d ",n);
            n = n+1;
        }
    }
}