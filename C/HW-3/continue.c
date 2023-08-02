#include <stdio.h>
int main()
{
    int x, n;
    float product = 1;
    printf("Please enter 4 intgers \n");
    for (int i = 0; i < 4; i++)
    {
        n = i + 1;
        printf("number %d :", n);
        fflush(stdout);
        scanf("%d", &x);
        if (x == 0)
        {
            continue;
        }
        else
        {
            product = product * x;
        }
    }
    printf("%0.2f", product);
}