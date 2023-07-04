#include <stdio.h>
#include <ctype.h>
int main()
{
    float x;
    printf("enter a number\n");
    fflush(stdout);
    scanf("%f",&x);
    if (x > 0)
    {
        printf("%0.2f is positive",x);
    }
    else if (x == 0)
    {
        printf("you entered zero",x);
    }
    else
    {
        printf(" %0.2f is negative",x);
    }
}