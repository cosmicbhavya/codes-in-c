//WAP to print the sum of digits of a number
#include <stdio.h>
void main()
{
    int n,r,sum=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(n>0){
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    printf("Sum of digits: %d", sum);
}