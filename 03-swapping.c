// WAP to swap without third variable
#include<stdio.h>
void main()
{
    int x,y;
    printf("Enter two numbers: ");
    scanf("%d%d", &x, &y);
    printf("\nNumbers before swapping are x=%d, y=%d.", x,y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("\nNumbers after swapping are x=%d, y=%d.", x,y);
}