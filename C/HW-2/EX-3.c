#include <stdio.h>
int main()
{
    float x, y, z, max;
    printf("enter the three numbers\n");
    fflush(stdout);
    scanf("%f", &x);
    fflush(stdout);
    scanf("%f", &y);
    fflush(stdout);
    scanf("%f", &z);
    max = x;
    if (x > y)
    {
        if (x > z)
        {
            printf("%0.2f is largest ", x);
        }
        else if (x < z)
        {
            printf("%0.2f is largest ", z);
        }
    }
    if (y > x)
    {
        if (y > z)
        {
            printf("%0.2f is largest ", y);
        }
        else if (y < z)
        {
            printf("%0.2f is largest ", z);
        }
    }
}
