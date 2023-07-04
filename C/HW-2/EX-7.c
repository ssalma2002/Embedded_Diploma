#include <stdio.h>
int main()
{
    int x, fac = 1;
    printf("enter a number\n");
    fflush(stdout);
    scanf("%d",&x);
    if (x < 0)
    {
        printf("%d is a negative number",x);
    }
    else if (x == 0)
    {
        printf("the factorial of 0 is 1 ");
    }
    else
    {
        for (int i = 1; i <= x; i++)
        {
            fac = fac * i;
        }
        printf("the factorial of %d is %d", x, fac);
    }
}