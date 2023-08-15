#include <stdio.h>
int Prime(int x, int y)
{
    for (; x <= y; x++)
    {
        if (x % 2 != 0)
        {
            printf("%d\n", x);
        }
    }
    return 0;
}
int main()
{
    int z, m;
    printf("enter two numbers ");
    fflush(stdout);
    scanf("%d%d", &z, &m);
    printf("the result is: ");
    Prime(z, m);
}