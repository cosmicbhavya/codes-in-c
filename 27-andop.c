#include <stdio.h>
void main()
{
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if ((a > b) && (a > c))
    {
        printf("%d is the greatest", a);
    }
    else if ((b > a) && (b > c))
    {
        printf("%d is the greatest", b);
    }
    else if ((c > a) && (c > b))
    {
        printf("%d is the greatest", c);
    }
}
