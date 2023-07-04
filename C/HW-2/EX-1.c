#include <stdio.h>
int main ()
{
    int x;
    printf("Enter an integer number to check\n");
    fflush(stdout);
    scanf(" %d",&x);
    if (x%2==0)
    {
        printf("%d is even", x);
    }
    else if (x%2 != 0)
    {
        printf("% d is odd",x);
    }
    
    
}