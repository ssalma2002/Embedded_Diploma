#include <stdio.h>
int main()
{
    int x, n, y, z;
    printf("please enter the number of elements: ");
    fflush(stdout);
    scanf("%d", &x);
    int a[x];
    printf("enter the numbers:\n");
    for (int i = 0; i < x; i++)
    {

        scanf("%d", &n);
        a[i] = n;
    }
    printf("enter the element you are looking for: ");
    fflush(stdout);
    scanf("%d", &y);

    for (int i = 0; i < x; i++)
    {
        if (a[i] == y)
        {
            printf("the location is in: ");
            printf("%d", i+1);
        }
    }
}