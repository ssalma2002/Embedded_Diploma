#include <stdio.h>
int factorial(int x)
{
    int f = 1;
    if (x == 0 || x == 1)
    {
        return 1;
    }

    for (; x > 0; x--)
    {
        f = f * x;
    }
}
int main()
{
    int x;
    printf("enter a number:\n");
    fflush(stdout);
    scanf("%d", &x);
    printf("the factorial of %d is %d", x, factorial(x));
}